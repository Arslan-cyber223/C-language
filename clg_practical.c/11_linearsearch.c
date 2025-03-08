#include <stdio.h>
int main()
{
    int arr[20], n, key, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d found at position %d\n", key, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("%d not found in array\n", key);
    }

    return 0;
}