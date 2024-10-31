// o que será impresso ao final da execucao do programa?
// resp : 1, 2, 3, 4

/*
OBS: lEIA O VALOR DE item através do teclado e inclua na lista de
maneira que
 o ponteiro prox deve apontar sempre para o proximo elemento da
lista.
*/


#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct no {

    int item;
    struct no *next;

} *Lst;

Lst createNo(int value){
    
    Lst current = (Lst) malloc(sizeof(struct no));
    current->item = value;
    current->next = NULL;
    
    return current;
}

Lst enterInQueue(Lst queue, int value){

    Lst current = createNo(value);

    if (queue == NULL){
        return current;
    }

    Lst aux = queue;

    while (aux->next != NULL)
    {
        aux = aux->next;
    }

    aux->next = current;
    return queue;
    
}

int main()
{

    Lst l = NULL;
    int quantityItems, currentValue;

    cout << "\n> How many items do you want insert: ";
    cin >> quantityItems;

    for ( int i = 0; i < quantityItems; i++){
        cin >> currentValue;
        // l = createNo(currentValue, l);
        l = enterInQueue(l, currentValue);
    }
        


    // show values
    while (l != NULL){
        cout << "value item: " << l->item << endl;
        l = l->next;
    }

    return 0;
}