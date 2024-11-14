#include "./headers/list.h"

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