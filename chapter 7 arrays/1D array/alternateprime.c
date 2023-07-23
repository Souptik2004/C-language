#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int arr[10];
    for(int i=0;i<=10;i++){
        arr[i]=rand()%(10-1)+1;
    }
    for(int i=0;i<=10;i++){
        printf("%d ", arr[i]);
    }
    int m=0;
    int arr2[10];
    for(int i=0;i<=10;i++){
        for(int j=0;j<=arr[i]/2;j++){
            int count=0;
            if(arr[i]/j==0){
                count++;
                arr2[m]=arr[i];
                m++;
            }
        }
    }
    for(int m=0;m<=10;m=m+2){
        printf("%d ", arr2[m]);
    }
    return 0;
    
}