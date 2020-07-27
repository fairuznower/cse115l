#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number % 7 == 0)
		printf("%d is a multiple of 7\n", number);
	else
		printf("%d is not a multiple of 7\n", number);

	return 0;
}