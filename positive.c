#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number > 0)
		printf("%d is positive.\n", number);
	else
		printf("%d is negetive.\n", number);

	return 0;
}