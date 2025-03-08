#include<stdio.h>
int main()
{
    char ch;
    // ASCII VALUE a=97  z=122
     printf("Enter the char :");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)
    {
        printf("It is a lowercase");
    }

    else
    {
        printf("It is not in lowercase");
    }
    return 0;
}