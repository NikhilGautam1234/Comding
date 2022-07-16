#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, ram;
        scanf("%d%d", &n, &ram);
        int a[n], b[n], l = ram, p = n;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
            l += b[i];
        }
        while (p--)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] <= ram)
                {
                    a[i] = l + 1;
                    ram += b[i];
                    break;
                }
            }
        }
        printf("%d\n", ram);
    }
    return 0;
}