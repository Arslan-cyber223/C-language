#include <stdio.h>
int main()
{
    int arr[5], i;
    printf("Enter the value of students:");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
        printf("The number of %d student is %d \n", i + 1, arr[i]);
    return 0;
}