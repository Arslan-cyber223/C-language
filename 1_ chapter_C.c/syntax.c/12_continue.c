#include<stdio.h>

int main()
{
    int skip =6;
    int i = 0;
    while(i<10)
    {
        if(i!=skip)
        { 
            i++;
            continue;
        }
        else 
        {
            printf("%d",i);
        }
         return 0;
    }
    
}