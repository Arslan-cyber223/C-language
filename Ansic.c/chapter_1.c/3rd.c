#include <stdio.h>
int main()
{
    int a, b, c, x;

    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("Enter the value of c:");
    scanf("%d", &c);

    x = a / (b - c);

    printf("The value of x is %d", x);
    return 0;
}