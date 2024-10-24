/*
Considerando o código abaixo, qual o valor de i e j ao final do
programa?
*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct {
    char valor[10];
} Str;

int main(){

    char valor[3]={"um"};
    Str v = {"123"};
    int i=0;

    while (i<=strlen(v.valor)){
        cout<<i<<"--"<<v.valor[i]<<endl;
        i++;
    }

    cout<<"---------";
    int j=0;

    while (valor[j]!='\0'){
        cout<<"j ="<<j<<"- "<<valor[j]<<endl;
        j++;
    }

    cout<<"valor de j: "<<j<<endl;      // 4
    cout<<"valor de i: "<<i<<endl;      // 2
}