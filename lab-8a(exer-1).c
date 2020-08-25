#include<stdio.h>
int countSearchKey(int aee[], int size, int key);
int main()
{
    int i, a_s, k, r, s;
    printf("Enter array size:");
    scanf("%d", &a_s);
    printf("Array Elrments");
    int ele[a_s];
    for (i = 0; i < a_s; i++)
        scanf("%d", &ele[i]);
    printf("Search key:");
    scanf("%d", &s);
    r = countSearchKey(ele, a_s, s);
    printf("Search key appears %d times", r);
    return 0;
}
int countSearchKey(int arr[], int size, int key)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            count++;
    }
    return count;
}