#include "headers/list.h"

int main() {
    
    List list = no(2, no(3, no(3, NULL)));
    int sumOfList = sum(list);
    printf("- Sum: %d", sumOfList);
}