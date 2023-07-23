#include<stdio.h>
int main()
{
    char sen[40];
    gets(sen);
    puts(sen);

    for(int i=0;i!='\0';i++){
        int n=0;
        n=sen[i];
       if(n>=65 && n<=90){
            printf("%s", sen[i+32]);

        }
        else if(n>=97 && n<=122){
            printf("%s", sen[i-32]);
        }
    }


    return 0;

}