#include <stdio.h>
int main()
{
    int first[3][3], second[3][3], result[3][3], i, j, k;

    printf("\n Enter the value of First Matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the values for 2D array:");
            scanf("%d", &first[i][j]);
        }
    }

    printf("\n Enter the value of second Matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter the values for 2D array:");
            scanf("%d", &second[i][j]);
        }
    }

    printf("\n First matrix is :");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", first[i][j]);
    }

    printf("\n second matrix is :");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", second[i][j]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                result[i][j] = first[i][j] * second[i][j];
            }
        }
    }

    printf("\n Multiplication of Matrix:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", result[i][j]);
    }

    return 0;
}