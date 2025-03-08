#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the char:");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 117)
        printf("%c is in LOWERCASE", ch);

    else if (ch >= 65 && ch <= 90)
        printf("%c is in UPPERCASE", ch);
    else
        printf("INVALID INPUT");
    return 0;
}