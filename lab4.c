#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
int choice;
printf("Enter a number: ");
scanf("%d", &choice);

switch(choice)
{
case1:
case2:
	printf("You typed 1 or 2");
	break;
case 4:
case5:
	printf("You typed 3 or 4");
	break;
default:
	printf("You typed something else");
}
return 0;



}