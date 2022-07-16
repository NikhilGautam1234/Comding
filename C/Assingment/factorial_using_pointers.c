#include <stdio.h>
void factorial(int, int *);
int main()
{
    int fact;
    int num;
    printf(" Input a number : ");
    scanf("%d", &num);

    factorial(num, &fact);
    printf(" The Factorial of %d is : %d \n\n", num, fact);
    return 0;
}

void factorial(int n, int *f)
{
    int i;

    *f = 1;
    for (i = 1; i <= n; i++)
        *f = *f * i;
}