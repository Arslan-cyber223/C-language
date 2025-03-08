//wrong 
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double s, ar, area;
    printf("Enter the a:");
    scanf("%d", &a);

    printf("Enter the b:");
    scanf("%d", &b);

    printf("Enter the c:");
    scanf("%d", &c);

    s = (a + b + c) / 2;

    ar = s * (s - a) * (s - b) * (s - c);
    area = pow(ar, (1 / 2));

    printf("The area of triangle is %f", area);
    return 0;
}