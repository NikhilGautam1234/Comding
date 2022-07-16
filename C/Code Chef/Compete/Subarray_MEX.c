#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k, l, n, i, c, flag = 0;
        scanf("%d%d%d", &n, &l, &k);
        int a[k];
        if (n > 0)
        {
            for (i = 0; i < n; i++)
            {
                if (i < l && i < k)
                {
                    a[i] = i;
                    if (a[i] == k - 1)
                    {
                        flag = 1;
                    }
                }
                else
                {
                    a[i] = i + 1;
                }
            }
            if (flag == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", a[j]);
                }
            }
            else
            {
                printf("-1");
            }
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                a[i] = i;
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}