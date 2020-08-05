#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
 int i;
 for (i=1; i<=9; i++)
 {
 printf("\n");
 for (int j=1; j<=i; j++)
 {
 printf("%d", j);
 }
 }
 printf("\n");
 return 0;
}