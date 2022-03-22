#include <stdio.h>

void sort(int *x, int *y)

{

    int temp;

    temp = *x;

    *x = *y;

    *y = temp;
}

int main()

{

    int arr[100], n;

    printf("Nikhil Gautam\n21BCS9434\n");

    printf("Enter the number of elements: ");

    scanf("%d", &n);

    printf("Enter the elements:-\n");

    for (int i = 0; i < n; i++)

    {

        printf("elenemt %d: ", i + 1);

        scanf("%d", &arr[i]);
    }

    for (int k = 0; k < n - 1; k++)

    {

        for (int j = 0; j < n - k - 1; j++)

        {

            if (arr[j] > arr[j + 1])

            {

                sort(&arr[j], &arr[j + 1]);
            }
        }
    }

    printf("\nElements after sorting: ");

    for (int i = 0; i < n; i++)

    {

        printf("%d ", arr[i]);
    }

    return 0;
}
