/*
O que será impresso ao final do programa?   // out : 11
O que a função X está fazendo?              // calculando o tamanho da string
*/

#include <stdio.h>

int x(char *str) {

    int y = 0;

    while (*str) {
        y++;
        str++;
    }

    return y;
}

int main() {

    char str[] = "Hello World";
    int w = x(str);
    printf("%d\n", w);
    return 0;

}