#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }        
        int count = 0, p = a[n - 1], l = 1, j = n - 2;

        while (j >= 0)
        {
            while (j >= 0 && a[j] == p)
            {
                l++;
                j--;
            }
            if (j < 0)
                break;
            count++;
            j -= l;
            l *= 2;
        }
        printf("%d\n",count);
    }

    return 0;
}