#include <stdio.h>
#include <stdlib.h>

// struct definition
typedef struct no {

    int value;
    struct no *next;

}*List;     // type Pointer to List


List no(int value, List list){
    List newList = (List) malloc(sizeof(struct no));

    if (newList != NULL){    // or if(newList)
        newList->value = value;
        newList->next = list;
    }

    return newList;
}

void showList(List list){
    while(list != NULL){
        printf("%d ", list->value);
        list = list->next;
    }
}

void concat(List *listA , List listB){
    if (listB == NULL) return;

    while(*listA != NULL){
        listA = &(*listA)->next;
    }

    *listA = listB;

}

void destroy(List *list){

    while (*list != NULL){
        List n = *list;
        *list = n->next;
        free(n);
    }
}

int getSize(List list){
    if (list == NULL) return 0;
    return 1 + getSize(list->next);
}

int pert(int value, List list){
    if (list == NULL) return 0;
    if (value == list->value) return 1;
    return pert(value, list->next);
}

List clone(List list){
    if (list == NULL) return NULL;
    return no(list->value, clone(list->next));
}

void showInvertedList(List list){
    if (list == NULL) return;
    showInvertedList(list->next);
    printf("%d ", list->value);
} 

int main(void) {

    // init list
    List list = no(0, NULL);
    List list2 = no(10,no(8, no(4, NULL)));

    list = no(1, list);
    list = no(2, list);
    list = no(3, list);

    showList(list);
    
    concat(&list, list2);
    printf("\nlist concat: \n");
    showList(list);

    printf("\nsize of list: %d", getSize(list));

    printf("\nlist has number 8? %d", pert(8, list));
    printf("\nlist has number 33? %d", pert(33, list));

    // creating clone of the list
    List cloneList = clone(list);

    printf("\nClone list: \n");
    showList(cloneList);

    printf("\nshow reversed list\n");
    showInvertedList(list);

    destroy(&list);
    destroy(&list2);
    destroy(&cloneList);
}

