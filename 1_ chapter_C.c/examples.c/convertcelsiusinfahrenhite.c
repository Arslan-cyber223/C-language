#include <stdio.h>
int main()
{
    int celsius;
    int fahrenhite = 273;
    printf("Enter the value of celsius :");
    scanf("%d",&celsius); 

    printf("The value after conversion in fahrenheit is: %d", fahrenhite + celsius);

    return 0;
}