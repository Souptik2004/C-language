#include<stdio.h>
#include<string.h>
int main()

{
    char s1[50], s2[50];
    printf("enter the string: ");
    gets(s1);
    printf("enter the string: ");
    gets(s2);

    if(strcmp(s1,s2)==0){
        printf("equal\n");

    }
    else{
        printf("not equal\n");
    }
    return 0;
}