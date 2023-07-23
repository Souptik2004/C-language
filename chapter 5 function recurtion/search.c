#include<stdio.h>

int search(int arr[], int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count=1;
        }
    }
    return count;
}
int main()
{
    int n;
    int arr[10];
    for(int i=0;i<10;i++){
        printf("enter:");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d ", arr[i]);
    }
    int k;
    printf("enter key");
    scanf("%d", &k);
    int m=search(arr,10,k);
    if(m==0){
        printf("not found");
    }
    else{
        printf("found");
    }
    return 0;
}