#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int size, int *arr) {
    int aux, i, j, troca = 0;

    for (i = size-1; i >= 1; --i) {
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                troca = 1;
            }
        }
        if (troca == 0) {
            break;
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 9, 8, 100, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(size, arr);

    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}