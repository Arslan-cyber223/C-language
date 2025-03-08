#include <stdio.h>
int main()
{
    int arr[100], size, i, min, max;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Enter the elements in array:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    min = arr[0];
    max = arr[0];

    for (i = 0; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

         if (arr[i] < min)
             min = arr[i];

    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);
    return 0;
}