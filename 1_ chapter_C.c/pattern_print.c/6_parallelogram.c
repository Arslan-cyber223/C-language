// to print
//      *
//     ***
//    *****
//   *******
//  *********
//   *******
//    *****
//     ***
//      *
#include <stdio.h>
int main()
{
    int i, j, n = 5;
    // upper half
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++) // print space
        {
            printf(" ");
        }
        for (j = 1; j <= ((2 * i) - 1); j++) // print star
        {
            printf("*");
        }
        printf("\n");
    }
    // lower half
    for (i = 4; i >= 1; i--)
    {
        for (j = i; j < n; j++) // print space
        {
            printf(" ");
        }
        for (j = 1; j <= ((2 * i) - 1); j++) // print star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}