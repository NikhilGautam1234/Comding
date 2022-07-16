#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        float b, side, m;
        int n,x;
        scanf("%f", &b);
        side = b / 2;
        m = ((side * side) / 4);
        n = (int)(m + 1e-9);
        if ((m-n)*4>=1)
        {
            x=(int)((m-n)*4);
            //printf("\tm-n=%f\n",(m-n)*4);
            printf("%d\n",n+x);
        }
       // printf("\tn=%d", n);
       // printf("\tm=%f\n", m);
    }
    return 0;
}