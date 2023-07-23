#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    char s2[10];
    printf("enter the string :");
    gets(s1);

    strrev(s1);
    printf("rev is %s", s1);
    return 0;
}