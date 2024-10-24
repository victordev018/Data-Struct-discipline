/*

Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima “São Iguais!”, senão
imprima “São Diferentes”.
OBSERVAÇÃO:
Faça usando:
char nome1[20];
char nome2[20];
UTILIZE O COMANDO DE REPETIÇÃO “FOR” PARA PERCORRER AS
STRINGS CARACTERE A CARACTERE E FAZER A COMPARAÇÃO ENTRE
ELAS.

*/

#include <stdio.h>
#include <string.h>

int main()
{

    char name1[10] = "Jota", name2[10] = "Jota";

    int size1 = strlen(name1), count = 0;
    
    for (int i = 0; i < size1; i++)
        if (*(name1+i) == *(name2+i))
            count++;

    if (size1 == count)   
        printf("\n> the two names are the same");
    else
        printf("\n> the two names are different");

    return 0;
}