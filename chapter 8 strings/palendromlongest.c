#include<stdio.h>
#include<string.h>
int main()
{
    //input section
    char str[100];
    printf("enter the string: ");
    gets(str);
    puts(str);

    //finding palendrom section
    int l=strlen(str);
    char s1[10];
    char s2[10];

    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(i!=j){

                if(str[i]==str[j]){
                    for(int k=i;k<=j;k++){
                            s1[k]=str[k];
                    }
                }
            }
        }
    }
    puts(s1);
    


    return 0;
}