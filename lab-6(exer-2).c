#include<stdio.h>
#include<math.h>
int main()
{
    int a, i=0, step=0, sign, result;
    printf("Enter an integer value");
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {
        sign=pow(-1, step);
        result=result+sign*pow(a-i,2);
        step++;
    }
    printf("%d", result);
    return 0;
}