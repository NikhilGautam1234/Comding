#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char a[n];
        scanf("%s",&a);
        
        if (n == 1)
        {
            printf("YES\n");
        }
        else if (n == 2)
        {
            if (a[0] == a[1])
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}