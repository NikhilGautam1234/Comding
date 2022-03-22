#include <stdio.h>
int main()
{
    int z, a[100], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:");
    for (z = 0; z < size; z++)
    {
        scanf("%d", &a[z]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &i);

    for (z = 0; z < size; z++)
    {
        if (a[z] == i)
        {
            break;
        }
    }if (a[z] == i)
        {
            printf("The element is on %d position.\n", z + 1);
        }else printf("The element to be found in not in the array.");

    return 0;
}