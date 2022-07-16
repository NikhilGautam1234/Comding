#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int recipt(int n)
{
    static int p = 0, a, b;
    int temp = n;
    static int count = 0;
    while (temp > 0)
    {
        temp /= 2;
        if (p < 12) p++;
    }
    a = (int)(pow(2, p) + 1e-9);
    b = (int)(pow(2, p - 1) + 1e-9);

    printf("\n%d %d %d ", n, a, b);

    if (n == 1)
    {
        count++;
        recipt(abs(1 - n));
    }
    else if (n < a && n >= b)
    {
        count++;
        recipt(abs(b - n));
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);
    t = 1;

    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", recipt(n));
    }
    return 0;
}