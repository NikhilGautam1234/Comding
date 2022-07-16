#include "stdio.h"
#include "stdlib.h"

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n], cunt = 0, m = -1;
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    qsort(a, n, sizeof(int), cmpfunc);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i - 1])
        {
            if (m != a[i])
            {
                cunt++;
                m = a[i];
            }
        }
    }
    printf("%d", cunt);
}