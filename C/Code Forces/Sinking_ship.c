#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char name[n][20], role[n][20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s", &name[i], &role[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (strcmp(role[j], "rat") == 0)
        {
            printf("%s\n", name[j]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (strcmp(role[j], "woman") == 0)
        {
            printf("%s\n", name[j]);
        }
        if (strcmp(role[j], "child") == 0)
        {
            printf("%s\n", name[j]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (strcmp(role[j], "man") == 0)
        {
            printf("%s\n", name[j]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (strcmp(role[j], "captain") == 0)
        {
            printf("%s\n", name[j]);
        }
    }

    return 0;
}