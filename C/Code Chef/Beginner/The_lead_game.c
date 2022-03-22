#include <stdio.h>

int main()
{
    int n, lead = 0,w,j=0,k=0;
    scanf("%d", &n);
    int a, b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        j+=a;
        k+=b;
        if (j > k)
        {
            if(j-k>lead)  lead = j - k;w=1;
        }
        else
        {
            if(k-j>lead)  lead = k - j;w=2;
        }
    }
    printf("%d %d",w,lead);
    return 0;
}