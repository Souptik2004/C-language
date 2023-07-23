#include<stdio.h>

int sum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    return sum;
}

int main()
{
    int arr[10];
    for(int i=0;i<10;i++){
        printf("enter: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){  
        printf("%d ", arr[i]);
    }
    printf("sum is %d", sum(arr, 10));

    return 0;
}