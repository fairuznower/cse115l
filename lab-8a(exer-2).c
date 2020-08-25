#include<stdio.h>
int main()
{
    int i, j, r, c, s, s = 0;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter which column to find sum of:");
    scanf("%d", &s);
    s--;
    for (i = 0; i < r; i++);
    s = s + arr[i][s];
    printf("Sum of column %d: %d", s + 1, s);
    return 0;
}