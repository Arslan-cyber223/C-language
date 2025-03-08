#include <stdio.h>
int main()
{
    int num, i, result, n = 10;

    printf("Enter the number:");
    scanf("%d", &num);

    for (i = 1; i <= n; i++)
    {
        result = num * i;
        printf("%d X %d = %d \n", num, i, result);
    }
    return 0;
}