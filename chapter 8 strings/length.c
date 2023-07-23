#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("enter the string : ");
    gets(str);

    int length=strlen(str);

    printf("\n%d\n", length);
    return 0;

}