#include <stdio.h>

int main()
{
    int n, a[100], i, p, m, x, sum1 = 0, sum2 = 0, s=1;
    float cp1, cp2, sp = 0;

    printf("Enter the no. of things he wants to sell: ");
    scanf("%d", &n);

    printf("\nEnter the no. of things he is selling on profit: ");
    scanf("%d", &p);

    printf("\nEnter the profit percentage: ");
    scanf("%d", &m);

    printf("\nThe no. of item he is selling on loss are %d.\n", n - p);
    printf("\nEnter the loss percentage: ");
    scanf("%d", &x);

    printf("\nEnter the price of the things which are sold on profit: \n");
    for (i = 0; i < p; i++)
    {
        printf("price of item number %d that was sold on profit: ",i+1);
        scanf(" %d", &a[i]);
    }

    printf("\nEnter the price of the things which are sold on loss: \n");
    for (i = p; i < n; i++)
    {
        printf("price of item number %d that was sold on loss: ",s);
        scanf(" %d", &a[i]);
        s++;
    }

    for (i = 0; i < p; i++)
    {
        sum1 = sum1 + a[i];
    }
    for (i = p; i < n; i++)
    {
        sum2 = sum2 + a[i];
    }

    cp1 = ((sum1 * 100) / (100 + m));
    cp2 = ((sum2 * 100) / (100 - x));

    printf("\nThe cost price of %d items he is selling on profit is: %.2f ", p, cp1);
    printf("\nThe cost price of %d items he is selling on loss is: %.2f ", n - p, cp2);

    for (i = 0; i < n; i++)
    {
        sp = sp + a[i];
    }

    printf("\nThe total of amount he collected by selling all things : %.2f", sp);
    if (sp > cp1 + cp2)
    {
        printf("\nHe had a profit of %.2f", sp - (cp1 + cp2));
    }
    else if (sp < cp1 + cp2)
    {
        printf("\nHe had a loss of %.2f", (cp1 + cp2) - sp);
    }
    else
    {
        printf("\nHe didn't had any profit or loss");
    }


    return 0;
}