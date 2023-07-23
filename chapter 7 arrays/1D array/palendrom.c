#include<stdio.h>
int main()
{
    int n;
    // int m;
    int arr[n];
    printf("enter the array\n");
   // int arr[n]={10,2,5,2,10};
   for(int i=0;i<n;i++){
       printf("enter %dth term: \n", i+1);
       scanf("%d", &arr[i]);
   }
   int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[(n-1)-i]){
        count++;
    }
    }
    if(count ==(n-1)/2){
    printf("palendrom\n");
    }
    else{
        printf("not palendrom\n");
    }
    
    return 0;
}