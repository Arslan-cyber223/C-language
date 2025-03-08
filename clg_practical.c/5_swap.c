#include <stdio.h>
int main()
{
    float first, second, temp;

    printf("Enter the first number:");
    scanf("%f", &first);

    printf("Enter the second number:");
    scanf("%f", &second);

    temp = first;
    first = second;
    second = temp;

    printf("The value of first after swap is %f \n", first);
    printf("The value of second after swap is %f", second);
    return 0;
}