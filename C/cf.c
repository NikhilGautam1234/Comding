#include <stdio.h>

int length(int n)
{
    int z = 0;
    while (n > 0)
    {
        n /= 10;
        z++;
    }
    return z;
}

int uvlvda(int n, int a[20])
{
}

int thik_hai_bhai(int n)
{
    int a[20], l, temp = n, z = length(n), x = 0;
    while (temp > 0)
    {
        l = temp % 10;
        a[z - 1] = l;
        temp /= 10;
        z--;
        x++;
    }
    if (a[x - 1] != 0 && a[x - 1] != 5)
    {
        n /= 10;
        if (n % 25 == 0)
        {
            return x - 1;
        }
        else
        {
            return thik_hai_bhai(n);
        }
    }
    else
    {
        uvlvda(n, a);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int len, ans;
        if (n % 25 == 0)
        {
            printf("%d\n", n);
        }
        else
        {
            ans = thik_hai_bhai(n);
        }
    }
    return 0;
}