#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int v = 0, c = 0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    p = str;

    while (*p != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            v++;
        else
            c++;
        p++;
    }

    printf("Number of Vowels in String: %d\n", v);
    printf("Number of Consonants in String: %d", c);
    return 0;
}