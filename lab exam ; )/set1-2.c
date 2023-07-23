#include<stdio.h>
int fact(int a){
    if(a==1|| a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
    return ;
}
int main()
{
    int n;
    printf("enter the n:");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ", fact(i));
    }

    return 0;
}