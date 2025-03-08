#include <stdio.h>
int area(int a);

int main()
{
    int c;
    c = area(5);
    printf("the area of square is %d\n", c);
    return 0;
}

int area(int a)
{
    int area;
    a = 5;
    area = 5 * 5;
    return area;
}