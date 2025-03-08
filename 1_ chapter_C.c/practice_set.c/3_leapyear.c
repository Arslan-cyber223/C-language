#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        printf("Your given year %d is a leap year",year);
    }
    else
    {
        printf("Your given year %d is not a leap year", year);
    }
    return 0;
}