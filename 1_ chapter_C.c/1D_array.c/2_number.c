#include <stdio.h>
int main()
{
    int size, i, j, odd = 0, even = 0;

    printf("Enter the value of size:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements:");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
            even++;

        else
            odd++;

    printf("In %d elements %d elements are even\n", size, even);
    printf("In %d elements %d elements are odd\n", size, odd);

    return 0;
}