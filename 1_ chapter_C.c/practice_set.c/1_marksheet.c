#include <stdio.h>
int main()
{
    int phy, math, che;
    float total;

    printf("Enter marks of phy :");
    scanf("%d", &phy);

    printf("Enter marks of math :");
    scanf("%d", & math);

    printf("Enter marks of  che :");
    scanf("%d", &che);
    
    total = (phy+che+math)/3;

    if(total<40 || phy<33 || math<33 || che<33 )
    {
         printf("Your percentage is %f and you are FAIL" , total);
    }
    else
    {
        printf("Your percentage is %f and you are PASS", total);
    }
    return 0 ;
}