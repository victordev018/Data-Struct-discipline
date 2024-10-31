// o que será impresso ao final da execução?    // out: 1 2 3 4

#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

void append(Node** head_ref, int new_data) {

    Node* new_node = (Node*)malloc(sizeof(Node));
    Node* p = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (p->next != NULL) {
        p= p->next;
    } 
    p->next = new_node;

    return;
}

// Se o algoritmo está incluindo no final da lista, Faça uma função
// que inclua no início da lista.
void insertIntoBeginning(Node **head_ref, int value){

    Node *new_data = (Node*) malloc(sizeof(Node));
    new_data->data = value;
    new_data->next = *head_ref;

    *head_ref = new_data;
}

// Função para imprimir a lista
void printList(Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}
int main() {
    Node* head = NULL;
    insertIntoBeginning(&head, 1);
    insertIntoBeginning(&head, 2);
    insertIntoBeginning(&head, 3);
    insertIntoBeginning(&head, 4);
    printf("Lista encadeada: ");
    printList(head);
    return 0;
}