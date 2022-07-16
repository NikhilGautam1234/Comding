#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, p;
        float r;
        scanf("%d", &n);
        r = sqrt(n);
        p = sqrt(n);
        if (r - p >= 0.5)
            printf("%d", p + 1);
        else
            printf("%d\n", p);
    }
    return 0;
}
