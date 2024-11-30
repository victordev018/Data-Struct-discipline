#include<stdio.h>
#include<stdlib.h>

typedef char Itemp;

typedef struct stack {

    int max;
    int top;    // indica a posição do topo
    Itemp *item;

} *Stack;

Stack createStack(int max) {
    Stack stack = malloc(sizeof(struct stack));

    if(stack) {
        stack->top = -1;
        stack->max = max;
        stack->item = malloc(max * sizeof(Itemp));
        return stack;
    }

    printf("Failed to allocate memory");
}

int isEmpty(Stack stack) {
    return stack->top == -1;
}

int isFull(Stack stack) {
    return stack->top == stack->max - 1;
}

// empilhar
void stack(Itemp value, Stack stack) {
    if(isFull(stack)) {
        printf("stack is full");
        abort();
    }

    stack->top++;
    stack->item[stack->top] = value;
}

// desempilhar
Itemp unstack(Stack stack) {
    if(isEmpty(stack)) {
        printf("stack is empty");
        abort();
    }

    Itemp lastItem = stack->item[stack->top];
    stack->top--;
    return lastItem;
}

void destroy(Stack *stack) {
    free((*stack)->item);
    free(*stack);
    *stack = NULL;
}

Itemp pick(Stack stack){
    if(isEmpty(stack)) {
        printf("stack is empty");
        abort();
    }

    return stack->item[stack->top];
}