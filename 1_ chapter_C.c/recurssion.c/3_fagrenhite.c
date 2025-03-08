#include <stdio.h>
float fah(float celsius);
int main()
{
    int cel;
    printf("Enter the value of celsius");
    scanf("%f", &cel);
    printf("The value in fahrenhite after conversion is %f", fah(cel));
    return 0;
}
float fah(float celsius)
{
    float result;
    result = (celsius * 1.8) + 32;
    return result;
}