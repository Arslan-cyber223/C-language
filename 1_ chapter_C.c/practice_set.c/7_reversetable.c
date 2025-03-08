#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (int i = 10; i; i--)
    {
        printf("The table of %d is %d \n", n, n * i);
    }
    return 0;
}