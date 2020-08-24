#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>


int search(int ara[], int size, int key) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        if (key == ara[i]) {
            sum = 1;
        }
    }
    return sum;
}

int main()
{
    int a[100];
    int i, n, key;

    printf("enter array size: ");
    scanf("%d", &n);

    printf("array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("search key: ");
    scanf("%d", &key);

    int s = search(a, n, key);
    if (s == 1) {
        printf("found");
    }
    else {
        printf("not found");
    }
    return 0;
}
