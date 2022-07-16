#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int t;
    sf("%d", &t);
    while (t--)
    {
        int n,count=0;
        sf("%d", &n);

        while (n > 0)
        {
            if (n == 1)
            {
                n = n - 1;
                count++;
            }
            else if (n < 5 && n >= 2)
            {
                count++;
                n = n - 2;
            }
            else if (n < 10 && n >= 5)
            {
                count++;
                n = n - 5;
            }
            else if (n < 50 && n >= 10)
            {
                count++;
                n = n - 10;
            }
            else if (n < 100 && n >= 50)
            {
                count++;
                n = n - 50;
            }
            else if (n >= 100)
            {
                count++;
                n = n - 100;
            }
        }
        pf("%d\n",count);
    }
    return 0;
}