#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	float a, b, c, d, e;
	float average;

	printf("Enter 5 numbers: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	average = (a + b + c + d + e) / 5.0;

	printf("Average is: %.2f\n", average);

	return 0;
}