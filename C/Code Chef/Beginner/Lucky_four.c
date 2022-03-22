#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n, temp = 0, four = 0;
        scanf("%d", &n);
        while (n > 0)
        {
            temp = n % 10;
            if (temp == 4)
            {
                four++;
            }
            n = n / 10;
        }
        printf("%d\n",four);
    }
    return 0;
}