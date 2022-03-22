#include <stdio.h>

int sum(int, int);    // with argument  with return type
int sum_2();          // without argument  with return type
void sum_3(int, int); // with argument  without return type
void sum_4();         // without argument  without return type

int main()
{
    int q, p;
    printf("The sum is %d\n", sum(q, p));
    printf("The sum is %d\n", sum_2());
    sum_3(q, p);
    sum_4();
    return 0;
}

int sum(int m, int n)
{
    int a;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    a = m + n;
    return a;
}

int sum_2()
{
    int a, m, n;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    a = m + n;
    return a;
}

void sum_3(int m, int n)
{
    int a;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    a = m + n;
    printf("The sum is %d\n", a);
}

void sum_4()
{
    int a, m, n;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    printf("The sum is %d\n", a = m + n);
}