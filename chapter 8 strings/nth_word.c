#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int word=0;
    char str[3000];
    printf("enter :");
    gets(str);
    puts(str);
    int n=0;
    int arr[30];

    //remove the spaces before the string
    for(int i=0;str[i]==' ';i++){

        n++;
        if(str[i]!=' '){
            break;
        }
    }
    //count the words
    for(int i=n;str[i]!='\0';i++){
        if(str[i]==' '){

            word++;
        }
    }
    printf("%d", word+1);
    int m;
    printf("enter the m");
    scanf("%d", &m);

    return 0;
}