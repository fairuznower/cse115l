#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
 int num=10;
 for(int i=0;i<num;i++)
 {
 if(i==4)
 continue;
 printf("%d\n",i);
 }
 return 0;
}