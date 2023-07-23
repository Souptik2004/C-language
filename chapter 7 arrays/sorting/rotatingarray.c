#include<stdio.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d", &n);
    int arr[5]={1,2,3,4,5};
    for(int j=0;j<n;j++){
        for(int i=0;i<5;i++){
            int temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    

    for(int i=0;i<5;i++){
        printf("%d", arr[i]);
    }vvvvvvvvvvvvvvvvv


    return 0;
}