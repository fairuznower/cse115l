#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main() {
    int i, n, n1 = 0, n2 = 1, n3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
return 0;
}