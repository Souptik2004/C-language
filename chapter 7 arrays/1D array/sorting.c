#include<stdio.h>
#include<string.h>

int main()
{
    int a[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    //assending order
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]>a[j]){
                int temp;
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    return 0;
}