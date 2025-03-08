#include <stdio.h>
int main()
{
    int arr[100], size, i;
    float avg, sum = 0.0;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter the elements in array:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        sum += arr[i];

    avg = sum / size;

    printf("%0.3f is the sum total of %d elements\n", avg, size);
    return 0;
}