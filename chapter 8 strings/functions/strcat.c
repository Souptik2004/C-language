#include<stdio.h>
#include<string.h>

int main()
{
    char s1[15]=("souptik");
    char s2[]=("karan");

    strcat(s1,s2);
    printf("%s", s1);
 
    return 0;
}