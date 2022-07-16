#include <stdio.h>
#include <string.h>

void main()
{
    int i, j, k, l, a, b;
    char option[30];
    printf("choose two numbers:\n");
    scanf("%d%d", &a, &b);
    i = a + b;
    j = a - b;
    k = a * b;
    l = a / b;
    printf("Now what you want to do with %d and %d\n", a, b);
    scanf("%s", option);

    if (strcmp(option, "addition") == 0)
    {
        printf("so your addition is %d\n", i);
    }

    else if (strcmp(option, "subtract") == 0)
    {
        printf("so your subtraction is %d\n", j);
    }

    else if (strcmp(option, "multiply") == 0)
    {
        printf("so your multiplication is %d\n", k);
    }

    else if (strcmp(option, "divide") == 0)
    {
        printf("so your division is %d\n", l);
    }

    else
    {
        printf("Only choose from:\naddition\nsubtract\nmultiply\ndivide\n");
    }
}