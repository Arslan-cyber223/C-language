#include<stdio.h>

int main()
{
    int i = 1, sum = 0;
    int n;
    printf("The value of n is:");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("The sum of %d natural number is %d", n, sum);

    return 0;
}