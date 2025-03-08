#include<stdio.h>
int main()
{
    int i = 1;
    int num;
    printf("Enter the value 0f num:");
    scanf("%d", &num);
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i <= num);
    return 0;
}