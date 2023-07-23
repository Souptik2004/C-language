#include<stdio.h>
int main()
{
    char str[10];

    printf("enter the string: ");
    gets(str);

    int count =0;
    int l = strlen(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' ){
           if(str[i+1]=='a' || str[i+1]=='e'|| str[i+1]=='i'|| str[i+1]=='o'|| str[i+1]=='u' ){
            count++;
            }
            else if(str[i]==' '){
            count =count+0;
            }
       
    }

    
}
    printf("count is %d",  count);
    return 0;
}