#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = "souptik karan";
    puts(str);
    // char str2[100];
    // strcpy(str2, str);
    // strrev(str2);
    // puts(str2);
    int n= strlen(str);
    for(int i=0;str[i]!='\0';i++){
        printf("%c", str[n-1-i]);
    }
    return 0;
}