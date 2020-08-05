#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
    int  i;
    printf(" Showing all the even numbers between 0 and 100 inclusive");

    for (i = 0; i <= 100; i ++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
