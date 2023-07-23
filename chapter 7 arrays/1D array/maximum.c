#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("enter n :");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter : ");
        scanf("%d", &a[i]);

    }
    arr[n]=a[0];
    for(int i=0;i<n;i++){
        if(arr[0]>=a[i]){
            arr[0]=a[i];
        }
    }
    printf("maximum is %d", arr[0]);
    return 0;
}