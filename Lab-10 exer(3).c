#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char str[MAX_SIZE];
    int i, len, vowel, consonant;

    printf("Enter any string: ");
    gets(str);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vowel++;
            else
                consonant++;
        }
    }

    printf(" Vowel = %d\n", vowel);
    printf(" Consonant = %d\n", consonant);

    return 0;
}