#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL;

int main()
{
    int n, N, count = 0;
    struct node *newnode, *temp;
    scanf("%d", &n);
    while (n != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = n;
        newnode->next = NULL;

        if (start == NULL)
            start = newnode;
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        count++;
        scanf("%d", &n);
    }
    scanf("%d", &N);
    if (N > count)
    {
        printf("-1");
        return 0;
    }
    while (count > N)
    {
        start = start->next;
        count--;
    }
    temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
