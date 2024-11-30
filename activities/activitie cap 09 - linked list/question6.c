#include "headers/list.h"

int main(){

    List list = no(7, no(4, no(1, no(3, no(1, NULL)))));

    printf("initial list:\n");
    showList(list);

    list = replace(1, 10, list);

    printf("\nlist after replace 1 per 10: ");
    showList(list);
}