// copying the 
#include<stdio.h>
#include<string.h>

int main()
{
    int str1[10];
    int str2[10];


    printf("enter the string 1\n");
    gets(str1); 

    // for( i=1;str1[i]!='\0';i++){
    //     str2[10]=str1[10];
    // char i; }
    // str2[i]='/0';
    strcpy(str2,str1);
    printf("the second string is %s", str2);

    return 0;
}