#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[25];
    
    printf("enter the string\n");
    gets(str);   // scanf("%[^\n]s", str);
   
    puts(str);
    return 0;

}