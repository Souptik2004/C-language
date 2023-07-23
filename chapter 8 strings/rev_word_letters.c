#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    printf("enter:");
    gets(str);
    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(i==0){
            for(int i=0;str[i]!=0;i++){
                if(str[i]!=' '){
                    count++;
                }
                else if(str[i]==' '){
                    break;
                }
            }
        }
    }
    for(int i=0;str[i]!='\0';i++){
        printf("%c", str[count-i]);
    }
    // printf("%d", count);

    return 0;
}