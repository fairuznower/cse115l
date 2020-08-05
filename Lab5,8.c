#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
 int i=0;
 while (i < 10)
 {
 i++;
 printf("%d\n",i);
 if (i == 5)
 break;
 }
 return 0;
}
