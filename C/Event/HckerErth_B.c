#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int j;

    for (int i = n; i <= m; i++)
    {
        j = m / i;
        if (j * i == m)
        {
            printf("%d\n", j);
            return 0;
        }
    }
    return 0;
}