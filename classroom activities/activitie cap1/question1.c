/*
Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão
imprima “São Diferentes”.
OBSERVAÇÃO:
Faça usando:
char nome1[20];
char nome2[20];
USE A FUNÇÃO STRCMP () PARA COMPARAR AS STRINGS.
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char name1[20] = "Joao";
    char name2[20] = "Joao";


    if (strcmp(name1, name2) == 0)
        printf("\n> the two names are the same");
    else
        printf("\n> the two names are different");
    
    return 0;
}