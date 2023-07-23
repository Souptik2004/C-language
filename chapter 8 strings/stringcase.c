#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("enter the :");
    gets(str);
    puts(str);
    printf("\n");

    int l=strlen(str);
    int arr[50];
    for(int i=0;i<l;i++){
        arr[i]=str[i];
    }
    // for(int i=0;i<l;i++){
    //     printf("%d ", arr[i]);
    // }
    printf("lower case is= ");
    printf("\n");
    //lower case;

    for(int i=0;i<l;i++){
        if(arr[i]>=65 && arr[i]<=90){
            arr[i]=arr[i]+32;
        }
    }
    for(int i=0;i<l;i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    printf("uppper case is =\n");

    // UPPER CASE
    for(int i=0;i<l;i++){
        if(arr[i]>=97 && arr[i]<=122){
            arr[i]=arr[i]-32;
        }
    }
    for(int i=0;i<l;i++){
        printf("%c", arr[i]);
    }


    // sentence case

    for(int i=0;i<l;i++){
        if(arr[i]>=65 && arr[i]<=90){
            arr[i]=arr[i]+32;
        }
    }
    for(int i=0;i<l;i++){
        
        printf("%c", arr[i]);
    }

    return 0;
}