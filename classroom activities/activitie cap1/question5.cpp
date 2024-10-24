
#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct no {
    int item;
    struct no *prox;
}No;

int main(){

    int qtd;
    cout << "\n> enter a array size: ";
    cin >> qtd;

    No v[qtd];
    
    // fill values
    for (int i = 0; i < qtd ; i++){
        
        v[i].prox = i == qtd-1 ? NULL : &v[i+1];
        cout << "\n> enter a number: ";
        cin >> v[i].item;

    }


    for (No *p = v; p ; p = p->prox)
        cout<< "\n-> " << p->item ;

    return 0;
}