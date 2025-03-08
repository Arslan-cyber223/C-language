#include <stdio.h>
int main()
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0 || j == 1 || j == 9)
            {
                printf(">");
            }
            else
            {
                printf("-");
            }
        }
    }

    return 0;
}