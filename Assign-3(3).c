#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, arr[20], j, no;
    clrscr();
    printf("Enter size of array: ");
    scanf("%d", &no);
    printf("Enter any %d elements in array: ", no);
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
            }
        }
    }
    return 0;
}