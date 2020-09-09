#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<conio.h>

int length(char*s);

void main() {
    char str[20];
    int lngth;
    

    printf("Enter any string : ");
    gets(str);

    lngth = length(str);
    printf("The length of the given string %s is : %d", str, lngth);

}

int length(char* s) /* p=&str[0] */
{
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}