#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("enter: \n");
    gets(str);
    //lower case
    printf("lower case\n");
    int m;
    for(int i=0;str[i]!='\0';i++){
        m=str[i];
        if(m<=90 &&m>=65){
            printf("%c", m+32);
        }
        else{
            printf("%c", m);
        }
    }
    printf("\n");
   
    //upper case
    printf("upper case\n");
    int n;
    for(int i=0;str[i]!=0;i++){
        n=str[i];
        if(n<=122 &&n>=97){
            printf("%c", n-32);
        }
        else{
            printf("%c", n);
        }
    }
    printf("\n");

    //sentence case
    printf("sentence case\n");
    for(int i=0;str[i]!='\0';i++){
        if(i==0){
            
            printf("%c", toupper(str[i]));
        }   
        else{
            printf("%c", str[i]);
        } 
    }
    printf("\n");


    //toggle case
    printf("toggle case\n");
    int p;
    for(int i=0;str[i]!=0;i++){
        p=str[i];
        if(p<=122 &&p>=97){
            printf("%c", p-32);
        }
        else if(p<=90 && p>=65){
            printf("%c", p+32);
        }
        else{
            printf("%c", p);
        }
    }
    printf("\n");

    //sentence case
    printf("sentence case\n");

    for(int i=0;str[i]!='\0';i++){
        if(i==0){
            
            str[i]= toupper(str[i]);
        }  
    }
    printf("%s", str);
    printf("\n");
    //proper case

    printf("proper case\n");

    
    for(int i=0;str[i]!='\0';i++){
        if(i==0){
            
            str[i]= toupper(str[i]);
        }  
        else if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
            
        } 
        
        
    }
    printf("%s", str);
    
    printf("\n");

    
    return 0;
}