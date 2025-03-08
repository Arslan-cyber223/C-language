#include <stdio.h>
int main()
{
    int size, i, sum = 0, prdt = 1;
    printf("Enter the value of size:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the value in arr:");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            prdt *= arr[i];
        }

    printf("The sum of all even number is %d\n", sum);
    printf("The prdt of all odd number is %d\n", prdt);

    return 0;
}