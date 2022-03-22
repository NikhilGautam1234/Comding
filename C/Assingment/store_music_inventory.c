#include <stdio.h>
#include <stdlib.h>

struct inventory
{
    char title[20];
    char singer[20];
    char album[30];
}*ptr;

int main()
{
    ptr=(struct inventory *)malloc(50*sizeof(char));
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("Enter the title of the song: ");
    gets(ptr->title);
    printf("Enter the singer: ");
    gets(ptr->singer);
    printf("Enter the album: ");
    gets(ptr->album);
    free(ptr);
    return 0;
}
