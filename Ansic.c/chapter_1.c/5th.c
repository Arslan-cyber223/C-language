#include <stdio.h>
int main()
{
    int a, b, sum, subtract;

    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    sum = a + b;

    printf("%d+%d=%d\n", a, b, sum);
    if (a > b)
    {
        subtract = a - b;
        printf("%d-%d=%d\n", a, b, subtract);
    }

    return 0;
}