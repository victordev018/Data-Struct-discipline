#include<stdio.h>
#include<stdlib.h>

int binary_seacrh(int searched, int initialIndex, int lastIndex, int arr[]) {
    if (initialIndex > lastIndex) return -1;
    else {
        int currentIndex = (initialIndex + lastIndex)/2;
        if (arr[currentIndex] == searched) return currentIndex;

        // se o elemento que eu busco está na direita
        if (arr[currentIndex] < searched) {
            return binary_seacrh(searched, currentIndex+1, lastIndex, arr);
        } else {
            return binary_seacrh(searched, initialIndex, currentIndex-1, arr);
        }
    }
}

int main() {

    int arr[] = {1, 4, 6, 8, 11, 21};
    int indexOfNumber21 = binary_seacrh(21, 0, 5, arr);
    printf("index of 21: %d\n", indexOfNumber21);           // out: 5
    int indexOfNumber44 = binary_seacrh(44, 0, 5, arr);
    printf("index of 44: %d\n", indexOfNumber44);           // out: -1

    return 0;
}