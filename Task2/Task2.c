#include <stdio.h>
#include <stdlib.h>

int rand10(int mmax) {
    return 1 + rand() % mmax;
}

double rand_double(double dmin, double dmax) {
    return dmin + (rand() / (double)RAND_MAX) * (dmax - dmin);
}

int* rand10_array(int n, int mmax) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = rand10(mmax);
    }
    return arr;
}

double* rand_double_array(int n, double dm) {
    double* arr = (double*)malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) {
        arr[i] = rand_double(-dm, dm);
    }
    return arr;
}

void print_int_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_double_array(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main() {

    int mmax = 10;
    printf("Случайное целое число от 1 до %d: %d\n", mmax, rand10(mmax));

    double dmin = 1.5, dmax = 5.5;
    printf("Случайное вещественное число от %.2f до %.2f: %.2f\n", dmin, dmax, rand_double(dmin, dmax));

    int n = 5;
    int* int_array = rand10_array(n, mmax);
    printf("Массив из %d целых чисел от 1 до %d: ", n, mmax);
    print_int_array(int_array, n);
    free(int_array);

    double dm = 5.0;
    double* double_array = rand_double_array(n, dm);
    printf("Массив из %d вещественных чисел от -%.2f до %.2f: ", n, dm, dm);
    print_double_array(double_array, n);
    free(double_array);

}