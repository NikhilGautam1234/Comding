#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        if (n > 1 && k == 1)
        {
            printf("-1");
        }
        else if (n == 1 && k == 1)
        {
            printf("1");
        }
        else
        {
            for (int i = 1; i < k; i++)
                printf("%d ", i);

            for (int j = n; j >= k; j--)
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}