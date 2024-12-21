#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(0));

	int m = 1 + rand() % 10;
	int k;

	int computer = 1 + rand() % 3;
	int n;

	printf("Введите ваше число: ");
	scanf("%d", &k);
	if (k == m)
		printf("Вы угадали число!\n");
	else if (k != m)
		printf("Вы не угадали число. Это было число %d\n", m);


	printf("Введите число (1 - ножницы, 2 - бумага, 3 - камень): ");
	scanf("%d", &n);
	if (n == 1 && computer == 1)
		printf("У вас ничья!");
	if (n == 2 && computer == 1)
		printf("Вы проиграли! У компьютера выпали ножницы.");
	if (n == 1 && computer == 2)
		printf("Вы выиграли! У компьютера была бумага.");

	if (n == 2 && computer == 2)
		printf("У вас ничья!");
	if (n == 2 && computer == 3)
		printf("Вы выиграли! У компьютера был камень.");
	if (n == 3 && computer == 2)
		printf("Вы проиграли! У компьютера была бумага.");

	if (n == 3 && computer == 3)
		printf("У вас ничья!");
	if (n == 3 && computer == 1)
		printf("Вы выиграли! У компьютера были ножницы.");
	if (n == 1 && computer == 3)
		printf("Вы проиграли! У компьютера был камень.");
}