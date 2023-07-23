#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    printf("enter : ");
    gets(str);
    // int length=strlen(str);
    // printf("length= %d\n", length);
    
    // if(str[0]!=' '){
    //     int count=1;
    //     for(int i=0;i!=' ';i++){
    //         if(i<=length ){
    //             if(str[i]==' '){
    //             count++;
    //         }
    //         }
    //     }
    //     printf("word is %d", count);

    // }
    // else{
    //     printf("word is : 0");
    // }

    char rev[100];
    strcpy(rev, str);
    strrev(rev);
    if(strcmp(rev, str)==0){
        printf("palendrom");

    }
    else{
        printf("not palendrom");
    }
    return 0;
}