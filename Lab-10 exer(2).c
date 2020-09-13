#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h> 
#include<string.h> 
int main(void) {
	char str[50], c;
	int temp = 0, i;
	printf("Enter the string : ");
	scanf("%s", str);
	printf("\n Search key : ");
	scanf(" %c", &c);
	for (i = 0; i < strlen(str) && str[i] != c; ++i);
	if (i < strlen(str))
		printf("\n Found ");
	else
		printf("\n Not found");
	return 0;
}