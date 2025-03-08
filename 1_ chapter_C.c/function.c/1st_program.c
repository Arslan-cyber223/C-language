#include <stdio.h>
void display(); // function prototype

int main()
{
    int a;
    printf("The value is initialized\n");

    display(); // function call
    printf("The value prints\n");
    return 0;
}

void display()// function definition
{  
    printf("This is to display\n");
}