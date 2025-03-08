#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int num;
    printf("Enter term:");
    scanf("%d", &num);
    printf("Fibonacci series upto %d term :", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", fibonacci(i));
    }
    printf("\n");
    return 0;
}