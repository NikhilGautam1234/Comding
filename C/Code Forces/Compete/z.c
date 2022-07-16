#include <stdio.h>

int countOdd(int p, int q)
{
    int b = (q - p) / 2;
    if (q % 2 != 0 || p % 2 != 0)
        b += 1;
    return b;
}
void solve()
{
    int l, r, k;
    scanf("%d%d%d", &l, &r, &k);

    if (l == r && l != 1)
    {
        printf("YES\n");
        return;
    }

    int o = countOdd(l, r);

    if (o > k)
        printf("NO\n");
    else
        printf("YES\n");
}
int main()
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}