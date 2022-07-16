#include <stdio.h>

int factorial(int num)
{
    if(num>=1)
    return num*factorial(num-1);    
    else
    return 1;
}

int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);

    printf("The factorial of %d is %d\n", number, factorial(number));
    return 0;
}
