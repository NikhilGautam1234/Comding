#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n+1], temp;
        a[n+1]=0;
        float sum = 0.0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
            sum += a[i];
        sum = sum - a[n - 1];
        sum = sum / (n - 1);
        sum += a[n - 1];
        printf("%.6f\n", sum);
    }
    return 0;
}