#include <stdio.h>
int main()
{
    int arr[100], size, i, sum = 0;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter the elements in array:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        sum += arr[i];

    printf("%d is the sum total of %d elements\n", sum, size);
    return 0;
}