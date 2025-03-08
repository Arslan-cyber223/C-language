#include <stdio.h>
int main()
{
    float distance, speed, time;

    printf("Enter the distance in meter:");
    scanf("%f", &distance);

    printf("Enter the time in second:");
    scanf("%f", &time);

    speed = (distance / time);

    printf("The speed of car is %f m/s", speed);
    return 0;
}