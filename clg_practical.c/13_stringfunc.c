#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100],str3[100],ch,*pos;
printf("Enter 1st string:");
gets(str1);
printf("Enter 2nd String:");
gets(str2);
printf("Length of 1st string :%lu",strlen(str1));
printf("Length of 2nd string :%lu",strlen(str2));
return 0;
}