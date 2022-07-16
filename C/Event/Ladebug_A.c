#include <stdio.h>
#include <string.h>
int main()
{
    int n, z = 0, f = 0, p = 0;
    scanf("%d", &n);
    char s[n][22], letters[100001], c[69], hue[100001];
    strcpy(temp, "abdz");
    for (int i = 0; i < n; i++)
        scanf("%s[^\n]", s[i]);
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(hue, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], hue);
            }
        }
    }
    gets(c);
    fgets(letters, 100001, stdin);
    for (int i = 0; i < (strlen(letters) / 2) + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j][0] == letters[z])
            {
                printf("%s\n", s[j]);
                strcpy(hue, s[j]);
                for (int k = j; k < n; k++)
                {
                    strcpy(s[k], s[k]);
                }
                strcpy(str[n - 1], hue);
                f = 1;
                break;
            }
        }
        z += 2;
    }
    return 0;
}