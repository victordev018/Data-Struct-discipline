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

int occurrences(int value, List list){
    if (list == NULL) return 0;
    if (value == list->value) return 1; 
    return 1 + occurrences(value, list->next);
}

int getLast(List list){
    if (list->next == NULL) return list->value;
    getLast(list->next);
}

List getReversed(List list) {
}

int sum(List list) {
    if (list == NULL) return 0;
    return list->value + sum(list->next);
}

List replace(int sourceValue, int newValue, List list) {
    if(list == NULL) return list;
    if(list->value == sourceValue) list->value = newValue;
    return replace(sourceValue, newValue, list->next);
}