#include<stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        sum += (n * i);
    }
    printf("The sum of the products of tha table %d is %d", n, sum);
    return 0;
}