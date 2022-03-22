#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int y,i=1900;
        int m = 0, d, w;
        scanf("%d", &y);
        y=y-1900;
        while(i<y+1900)
        {
            if (i % 100 == 0)
            {
                if (i % 400 == 0)
                {
                    m++;
                }
            }
            else
            {
                if (i % 4 == 0)
                {
                    m++;
                }
            }
            i++;
        }
        y = (y - m) * 365 + (m * 366)+1;
        w = y % 7;
        switch (w)
        {
        case 0:
            printf("sunday\n");
            break;
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        default:
            break;
        }
    }
    return 0;
}