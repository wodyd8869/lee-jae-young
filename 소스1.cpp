#include <stdio.h>

int main()
{
	int num;
	printf("4�ڸ� ���� �Է� :");

	scanf_s("%d", &num, sizeof(int));

	printf("%10d\n", num);
	printf("%010d\n", num);
	printf("%0+10d\n", num);
	printf("%-10d\n", num);
	printf("%10o\n", num);
	printf("%0#10o\n", num);
	printf("%10x\n", num);
	printf("%0#10x\n", num);
}