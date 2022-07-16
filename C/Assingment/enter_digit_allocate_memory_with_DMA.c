#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dig, n, sum = 0;
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter the digits from RIGHT to LEFT:-\n");
    dig = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Digit %d: ", i + 1);
        scanf("%d", &dig[i]);
        sum = sum + dig[i];
    }
    printf("The digits are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", dig[i]);
    }
    printf("\nThe sum of digits is %d", sum);
    free(dig);
    return 0;
}