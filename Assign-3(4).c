#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
void merge(int[], int, int[], int, int[]);

int main() {
    int a[100], b[100], c, d, e, sorted[200];

    printf("Input number of elements in first array\n");
    scanf("%d", &c);

    printf("Input %d integers\n", c);
    for (c = 0; c < c; c++) {
        scanf("%d", &a[c]);
    }

    printf("Input number of elements in second array\n");
    scanf("%d", &d);

    printf("Input %d integers\n", d);
    for (c = 0; c < d; c++) {
        scanf("%d", &b[c]);
    }

    merge(a, c, b, d, sorted);

    printf("Ascending orders:\n");

    for (c = 0; c < c + d; c++) {
        printf("%d\n", sorted[c]);
    }

    return 0;
}

void merge(int a[], int m, int b[], int n, int sorted[]) {
    int i, j, k;

    j = k = 0;

    for (i = 0; i < m + n;) {
        if (j < m && k < n) {
            if (a[j] < b[k]) {
                sorted[i] = a[j];
                j++;
            }
            else {
                sorted[i] = b[k];
                k++;
            }
            i++;
        }
        else if (j == m) {
            for (; i < m + n;) {
                sorted[i] = b[k];
                k++;
                i++;
            }
        }
        else {
            for (; i < m + n;) {
                sorted[i] = a[j];
                j++;
                i++;
            }
        }
    }
}