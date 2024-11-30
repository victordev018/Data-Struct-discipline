#include "./headers/list.h"

int main() {

    List list = no(7,no(2,no(2,no(1, NULL))));

    printf("\nlist:\n");

    showList(list);

    printf("\nThe last number is: %d", getLast(list));
}