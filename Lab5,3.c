#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
 int i,times;
 scanf("%d",&times);
 i = 0;
 do
 {
 i++;
 printf("%d\n",i);
 }
 while (i <= times);
 return 0;
}