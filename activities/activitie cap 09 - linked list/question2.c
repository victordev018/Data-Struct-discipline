#include "./headers/list.h"

int main(){

    List list = no(7,no(2,no(2,no(1, NULL))));

    int quantity = occurrences(2, list);

    printf("\nOccurrences 2: %d", quantity);

}