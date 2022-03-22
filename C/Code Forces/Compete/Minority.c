#include <stdio.h>
#include <string.h>

int solve(int l, char s[200001])
{
    int a = 0, b = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '1') a++;
        if (s[i] == '0') b++;
    }

    if (a > b) printf("%d\n", b);
    else if (b > a) printf("%d\n", a);
    else return 3;

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[200001];
        scanf("%s", &s);
        int f, l;
        l = strlen(s);
        f = solve(l, s);
        if (f == 3) solve(l - 1, s);
    }
    return 0;
}