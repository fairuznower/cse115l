#include <stdio.h>
int main()
{
int arr[5],i;
printf("Enter array elements: ");
for(i=0;i<5;i++)
    scanf("%d", &arr[i]);
printf("Reversed order: ");
for(i=4;i>=0;i--)
    printf("%d ", arr[i]);

    return 0;
}