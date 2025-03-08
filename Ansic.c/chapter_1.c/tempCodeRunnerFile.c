#include <stdio.h>
int main()
{
    int i, j, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == 1 || i == 3)
            {
                printf("_");
            }
            else if (j == 1 || j == 10)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}