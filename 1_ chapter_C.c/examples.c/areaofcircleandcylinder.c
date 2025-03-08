#include<stdio.h>
#define PI 3.14159
int main()
{
    int radius , height ;
     printf("Enter the value of radius:");
     scanf("%d",&radius);

     printf(" The area of circle is :%f \n", PI*radius*radius );
 

     printf("Enter the value of height: ");
     scanf("%d",& height);

     printf("Area of cylinder is :%f", 2*PI*radius*(radius+height));
     return 0 ;
      
}