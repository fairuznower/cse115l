#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number % 2 == 0)
		printf("%d is even\n", number);
	else
		printf("%d is odd\n", number);

	return 0;
}