#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("Enter the number: ");
    scanf("%d", &b);
    while (1)
    {

        printf("Enter the operation you want to perform:\n\t1. Check even or odd\n\t2. Check positive or negative\n\t3. Square of number\n\t4. Square root of number\n\t5. Exit\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            if (b % 2 == 0)
            {
                printf("The number is even.\n");
            }
            else
            {
                printf("The number is odd.\n");
            }
            break;
        case 2:
            if (b < 0)
            {
                printf("The number is negative.\n");
            }
            else
            {
                printf("The number is positive.\n");
            }
            break;

        case 3:
            printf("The square of number is %d\n", b * b);
            break;
        case 4:
            printf("The square root of number is %.4f\n", sqrt(b));
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Not a valid operation\n");
        }
    }
}
