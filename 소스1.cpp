#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double a, b, c;
	double d, e, f;
	printf("�����µ��� �Ҽ��� 3�� �Է��Ͻÿ�:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = (9.0 / 5.0) * a + 32.0;
	e = (9.0 / 5.0) * b + 32.0;
	f = (9.0 / 5.0) * c + 32.0;
	printf("%.4f\n %.4f\n %.4f\n", d, e, f);
}