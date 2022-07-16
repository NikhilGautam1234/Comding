#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, count = 0;
        scanf("%d", &n);
        while (n > 0)
        {
            if (n == 1)
            {
                n = n - 1;
                count++;
            }
            else if (n < 4 && n >= 2)
            {
                count++;
                n = n - 2;
            }
            else if (n < 8 && n >= 4)
            {
                count++;
                n = n - 4;
            }
            else if (n < 16 && n >= 8)
            {
                count++;
                n = n - 8;
            }
            else if (n < 32 && n >= 16)
            {
                count++;
                n = n - 16;
            }
            else if (n < 64 && n >= 32)
            {
                count++;
                n = n - 32;
            }
            else if (n < 128 && n >= 64)
            {
                count++;
                n = n - 64;
            }
            else if (n < 256 && n >= 128)
            {
                count++;
                n = n - 128;
            }
            else if (n < 512 && n >= 256)
            {
                count++;
                n = n - 256;
            }
            else if (n < 1024 && n >= 512)
            {
                count++;
                n = n - 512;
            }
            else if (n < 2048 && n >= 1024)
            {
                count++;
                n = n - 1024;
            }
            else if (n >= 2048)
            {
                count++;
                n = n - 2048;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}