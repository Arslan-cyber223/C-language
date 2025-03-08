#include <stdio.h>
int main()
{
    float tax , income;

    printf("Enter your income : \n");
    scanf("%f", &income);

    if (income > 250000 && income < 500000)
    {
        tax =  (0.5 * (income - 250000));
        printf("Your tax is %f", tax);
    }
    else if (income > 500000 && income < 1000000)
    {
        tax = (0.05 * 250000) + (0.2 * (income - 500000));
        printf("Your tax is %f", tax);
    }
    else if (income > 1000000)
    {
        tax = (0.05 * 250000) + (0.2 * 500000) + (0.3 * (income - 1000000));
        printf("Your tax is %f", tax);
    }
    else
    {
         printf("Your tax is 0");
    }
    return 0;
}
