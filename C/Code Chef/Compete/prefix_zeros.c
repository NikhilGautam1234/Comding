#include <stdio.h>
#define int long long int

int apdhillon(int m, char s[100001])
{
    int add = 0;
    for (int i = m; i >= 0; i--)
    {
        int v = ((int)(s[i]) - (int)('0') + add) % 10;
        if (v == 0)
            continue;
        add += 10 - v;
    }
    return add;
}

signed main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        char str[n];
        gets(str);
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (apdhillon(m, str) > k)
                r = m - 1;
            else
            {
                ans = m + 1;
                l = m + 1;
            }
        }
        printf("%d\n", ans);
    }
}