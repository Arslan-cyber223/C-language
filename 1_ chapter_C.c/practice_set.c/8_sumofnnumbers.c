#include<stdio.h>

int main()
{
    int i, sum = 0;
    int n;
    printf("The value of n is:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of %d natural number is %d", n, sum);
    return 0;
}