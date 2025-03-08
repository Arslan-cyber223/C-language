#include <stdio.h>
int main()
{
    int row, coloum, i, j;

    printf("Enter the number of row:");
    scanf("%d", &row);
    printf("Enter the value of coloum:");
    scanf("%d", &coloum);

    int arr[row][coloum];
    printf("Enter the elements of array;");
    for (i = 0; i < row; i++)
        for (j = 0; j < coloum; j++)
            scanf("%d", &arr[i][j]);
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < coloum; j++)
            {
                printf("%d\t", arr[i][j]);
            }

            printf("\n");
        }
    }
    return 0;
}