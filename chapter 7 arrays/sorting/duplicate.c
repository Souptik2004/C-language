#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,2,1};

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j] && i!=j){
                printf("%d", arr[i]);
            }
        }
    }
    return 0;
}