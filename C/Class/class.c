#include <stdio.h>

int main()
{
    float distance;
    printf("Enter the distance between cities in KM:");
    scanf("%f", &distance);

    printf("The distance in meteres is %.0f\n", distance * 1000);
    printf("The distance in centimeteres is %.0f\n", distance * 100000);
    printf("The distance in feet is %.2f\n", distance * 3280.4);
    printf("The distance in inches is %.2f\n", distance * 39370.1);

    return 0;
}