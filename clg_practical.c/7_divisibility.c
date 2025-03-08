#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);

    if (a % 2 == 0 && a % 3 == 0)
        printf("%d is divisible by 2 and 3\n", a);

    else if (a % 2 == 0)
        printf("%d is divisible by 2 and n", a);

    else
        printf("%d is divisible by 3\n", a);

    return 0;
}