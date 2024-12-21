#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand10(int mmax) {
    return 1 + rand() % mmax;
}

void histogram(int* counter, int K, int N, int R) {
    int max_count = 0;
    for (int i = 0; i < K; i++) {
        if (counter[i] > max_count) {
            max_count = counter[i];
        }
    }

    for (int i = 0; i < K; i++) {
        int stars = (counter[i] * R) / max_count;
        printf("%d: ", i + 1);
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    srand(time(0));

    int K = 10;  
    int N = 100; 
    int R = 50;

    int* counter = (int*)malloc(K * sizeof(int));

    for (int i = 0; i < K; i++) {
        counter[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        int num = rand10(K);
        counter[num - 1]++;
    }

    printf("Гистограмма частоты выпадания значений:\n");
    histogram(counter, K, N, R);
    free(counter);

}