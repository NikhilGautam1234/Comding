#include <stdio.h>

#include <stdlib.h>

int main()
{
    int n, i;
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("\tRUNTIME MEMORY ALLOCATION\n");
    printf("Enter max number of characters you want to input\n");
    scanf("%d", &n);
    char *s = (char *)malloc(n * sizeof(char));
    if (s == NULL)
    {
        printf("Memory allocation failed!\n");
        printf("Exiting tghe program.");
        return 0;
    }
    printf("Enter string please: ");
    for (i = 0; i < n; i++)
    {
        scanf("%c", s + i);
    }

    *(s + i) = '\0';
    printf("You wrote %s", s);
    fflush(stdin);

    printf("\nEnter new size\n");
    scanf("%d", &n);

    s = realloc(s, n * sizeof(char));

    printf("\nEnter new string please: ");
    for (i = 0; i < n; i++)
    {
        scanf("%c", s + i);
    }

    *(s + i) = '\0';
    printf("You wrote %s\n", s);
    free(s);

    return 0;
}