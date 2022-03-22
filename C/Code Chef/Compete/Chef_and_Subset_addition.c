#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, y,flag=0;
        scanf("%d%d%d", &n, &x, &y);
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&b[i]);
            if ((a[i] + x == b[i]) || (a[i] + y == b[i]))
            {
                flag++;
            }
        }
        if (flag==n) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}