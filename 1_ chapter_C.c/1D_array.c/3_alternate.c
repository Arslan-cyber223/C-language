#include <stdio.h>
int main()
{
    int size, i;

    printf("Enter the size:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the  elements in array:");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        if (i % 2 == 0)
            printf("%d\t", arr[i]);

        else
            continue;

    return 0;
}
