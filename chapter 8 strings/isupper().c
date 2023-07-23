#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int var1='m';
    int var2='M';

    if(isupper(var1)){
        printf("var1 = |%c| is uppercase", var1);
    }
    else{
        printf("var1 = |%c| is lowercase", var1);
    }

    return 0;
}