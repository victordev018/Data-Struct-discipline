/*
O que será impresso ao final do programa?   "Hello World"
O que a função myConcat está fazendo?      - Somplismente juntando o texto de str2 ao final de str1

*/

#include <iostream>
using namespace std;

void myConcat(char *str1, char *str2){

    // going to the end of the first string
    while(*str1)
        str1++;

    // joining string two at the end of string one
    while (*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

int main()
{

    char str1[100] = "Hello ";
    char str2[] = "World!";
    myConcat(str1, str2);
    printf(" %s\n", str1);

    return 0;
}