#include <stdio.h>
int main()
{
    int prin, rate , year;
       

    printf("Enter the value of principle:");
    scanf("%d", &prin);

    printf("Enter the value of Rate:");
    scanf("%d", &rate);

    printf("Enter the value of year:");
    scanf("%d", &year);

    int simpleinterest = (prin * rate * year) / 100;

    printf("The SI of the year is :%d", simpleinterest);

    return 0;
}