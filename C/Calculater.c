#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter your number a \n");
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("For addition press 1\nFor subtraction press 2\nFor multiplicatin press 3\nFor division press4\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("Sum of a and b is %d\n", a + b);
        break;
    case 2:
        printf("Subtraction of a and b is %d\n", a - b);
        break;
    case 3:
        printf("Multiplication of a and b is %d\n", a * b);
        break;
    case 4:
        printf("Division of a and b is %d\n", a / b);
        break;
    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}