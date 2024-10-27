// o que será impresso ao final da execucao do programa?
// resp : 1, 2, 3, 4

/*
OBS: lEIA O VALOR DE item através do teclado e inclua na lista de
maneira que
 o ponteiro prox deve apontar sempre para o proximo elemento da
lista.
*/


#include <iostream>
using namespace std;

typedef struct no {

    int item;
    struct no *next;

} *Lst;

Lst createNo(int value, Lst next){
    
    Lst lst = (struct no*) malloc(sizeof(struct no));
    lst->item = value;
    lst->next = next;
    return lst;

}

int main()
{

    Lst l = NULL;
    int quantityItems, currentValue;

    cout << "\n> How many items do you want insert: ";
    cin >> quantityItems;

    for ( int i = 0; i < quantityItems; i++){
        cin >> currentValue;
        l = createNo(currentValue, l);
    }
        


    // show values
    while (l){
        cout << "v item: " << l->item << endl;
        l = l->next;
    }

    return 0;
}