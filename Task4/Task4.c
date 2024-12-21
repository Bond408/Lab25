#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> //15 ? 50, 1

#define N 100
#define R 50 
#define K 10  

int main() {
    system("color F0");
    setlocale(LC_ALL, "ru");
    int min_value, max_value, type;
    printf("??????? ??????????? ????????: ");
    scanf_s("%d", &min_value);
    printf("??????? ???????????? ????????: ");
    scanf_s("%d", &max_value);
    printf("??????? ??? ?????? (0 - ?? ????????????, 1 - ?? ?????????????): ");
    scanf_s("%d", &type);

    int counter[K] = { 0 };
    int array[N];
    int i;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        array[i] = rand() % (max_value - min_value + 1) + min_value;
    }

    // ?????
    for (i = 0; i < N; i++) {
        int index;
        if (type == 0) {
            index = (array[i] - min_value) % K;
        }
        else {
            index = (max_value - array[i]) % K;
        }
        counter[index]++;
    }

    int nmax = 0;
    for (i = 0; i < K; i++) {
        if (counter[i] > nmax) {
            nmax = counter[i];
        }
    }

    for (i = 0; i < K; i++) {
        int x = (counter[i] * R) / nmax;
        printf("%d: ", i + 1);
        for (int j = 0; j < x; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}