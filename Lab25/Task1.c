#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(0));

	int m = 1 + rand() % 10;
	int k;

	int computer = 1 + rand() % 3;
	int n;

	printf("������� ���� �����: ");
	scanf("%d", &k);
	if (k == m)
		printf("�� ������� �����!\n");
	else if (k != m)
		printf("�� �� ������� �����. ��� ���� ����� %d\n", m);


	printf("������� ����� (1 - �������, 2 - ������, 3 - ������): ");
	scanf("%d", &n);
	if (n == 1 && computer == 1)
		printf("� ��� �����!");
	if (n == 2 && computer == 1)
		printf("�� ���������! � ���������� ������ �������.");
	if (n == 1 && computer == 2)
		printf("�� ��������! � ���������� ���� ������.");

	if (n == 2 && computer == 2)
		printf("� ��� �����!");
	if (n == 2 && computer == 3)
		printf("�� ��������! � ���������� ��� ������.");
	if (n == 3 && computer == 2)
		printf("�� ���������! � ���������� ���� ������.");

	if (n == 3 && computer == 3)
		printf("� ��� �����!");
	if (n == 3 && computer == 1)
		printf("�� ��������! � ���������� ���� �������.");
	if (n == 1 && computer == 3)
		printf("�� ���������! � ���������� ��� ������.");
}