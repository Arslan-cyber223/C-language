#include <stdio.h>
int main()
{
    int number = 50;
    int *p;      // pointer to int      
    p = &number; // stores the address of number variable        
    printf("Address of p variable is %u \n", p);
    p = p + 1;
    printf("After increment: Address of p variable is %u \n", p);
    return 0;
}
