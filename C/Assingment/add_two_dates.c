#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct add_two_dates
{
    int date;
    int month;
    int year;
}*ptr;


int main()
{
    ptr=(struct add_two_dates*)malloc(50*sizeof(int));
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("Enter the first date(date,month,year): ");
    scanf("%d%d%d",&ptr[0].date,&ptr[0].month,&ptr[0].year);
    printf("Enter the second date(date,month,year): ");
    scanf("%d%d%d",&ptr[1].date,&ptr[1].month,&ptr[1].year);
    for (int i = 0; i < 2; i++)
    {
        if (ptr[i].date>31)
        {
            printf("The date you have entered is invalid.");
            return 0;
        }
        if (ptr[i].month>12)
        {
            printf("The month you have entered is invalid.");
            return 0;
        }
        if (ptr[i].year>9999)
        {
            printf("The month you have entered is over limit.");
            return 0;
        }            
    }
    
    ptr[2].date=ptr[0].date+ptr[1].date;
    ptr[2].month=ptr[0].month+ptr[1].month;
    ptr[2].year=ptr[0].year+ptr[1].year;

    if (ptr[2].date>31)
    {
        ptr[2].month++;
        ptr[2].date=abs(31-ptr[2].date);        
    }
    if (ptr[2].month>12)
    {
        ptr[2].year++; 
        ptr[2].month=abs(12-ptr[2].month);  
    }

    printf("\nThe date after adding is %d/%d/%d",ptr[2].date,ptr[2].month,ptr[2].year);
    free(ptr); 
    
    return 0;
}
