#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], a[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);
    printf("The frequency of elements is:\n");
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i] == a[j])
            {
                count[j]++;
            }
        }
    }
    for (int i=0; i<10; i++) {
        printf("%d ",count[i]);    
    }

    return 0;
}
