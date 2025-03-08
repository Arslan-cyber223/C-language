#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    return 0;
}

void goodmorning()
{

    printf("Good morning Arslan \n");
    goodafternoon();
}
void goodafternoon()
{

    printf("Good afternoon Arslan \n");
    goodnight();
}
void goodnight()
{

    printf("Good night Arslan \n");
}

 