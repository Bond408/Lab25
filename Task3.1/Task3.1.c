#include <stdio.h>

void reverse_array(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int arr[] = { 1, 1, 3, 2, 5, 4 };
    int n = 6; 

    printf("Исходный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse_array(arr, n);

    printf("Массив после реверса:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}