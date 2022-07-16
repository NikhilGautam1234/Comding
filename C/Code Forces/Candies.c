#include <stdio.h>

int main()
{
    int m, n, a[101] = {0};
    scanf("%d%d", &m, &n);

    if (m % n == 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", m / n);
        }
    }
    else
    {
        while(m>0)
        {
            for (int i = 0; i < n; i++)
            {
                if (m > 0)
                {
                    a[n-i-1]++;
                }
                m--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}