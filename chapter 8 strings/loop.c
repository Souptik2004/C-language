#include<stdio.h>
#include<string.h>
 
int main()
{
    int n=0;
    char str[6]="coding";
    while(n<6){
        for(int i=0;i<n;i++){
        printf("%c", str[i]);
        printf("\n");
    }
    }
    return 0;
}