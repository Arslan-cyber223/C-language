#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("Enter the value of c:");
    scanf("%d", &c);

    printf("Enter the value of d:");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest number is a:%d", a);
    }

    else if (b > a && b > c && b > d)
    {
        printf("The greatesr number is b:%d", b);
    }

    else if (c > a && c > b && c > d)
    {
        printf("The greatesr number is c:%d", c);
    }

    else if (d > a && d > b && d > c)
    {
        printf("The greatesr number is d:%d", d);
    }

    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}