#include <stdio.h>

int main()
{
    int age, marks;

    printf("enter your age\n");
    scanf("%d", &age);
    printf("enter you marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        break;

    case 54:
        printf("the age is 54\n");
        break;

    case 17:
        printf("the age is 17\n");
        break;
    case 85:
        printf("the age is 85\n");

        switch (marks)
        {
        case 80:
            printf("your marks are 80\n");
            break;

        default:
            printf("you are a genius");
            break;
        }
    }

    return 0;
}