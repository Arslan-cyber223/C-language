#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the value of n:");
    fflush(stdout); // Add this line to flush the output buffer
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
} 
