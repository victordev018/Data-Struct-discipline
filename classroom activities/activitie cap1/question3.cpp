/*
Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão
imprima “São Diferentes”.
OBSERVAÇÃO: Faça usando:
string nome1;
string nome2;
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name1 = "Joao", name2 = "Joao";

    if (name1 == name2)
        printf("\nthe two name are the same");
    else   
        printf("\nthe tow names are different");

    return 0;
}