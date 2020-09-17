#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include <string.h>

int stringlength(char* s)
{
    int j;
    for (j = 0; s[j]; j++);

    return j;

}


void replacechar(char* s, char c1, char c2)
{
    static int i = 0;

    if (!s[i])
        return;
    if (s[i] == c1)
        s[i] = c2;
    i++;
    replacechar(s, c1, c2);
}


int main()
{

    char s[1000], c1, c2;

    printf("Enter  the string : ");
    gets(s);

    printf("Enter a character replace: ");
    c1 = getchar();
    getchar();
    printf("\nEnter character to replace  with  %c : ", c1);
    c2 = getchar();
    printf("\n before replace:%s", s);

    replacechar(s, c1, c2);

    printf("\nafter replace:%s", s);


    return 0;

}