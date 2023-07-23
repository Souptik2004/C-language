#include<stdio.h>
int main()
{
    int arr[9]= {55, 11, 44, 33, 99, 88, 77, 66, 22};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[j]>arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
        }
    }
    for(int i=0;i<9;i++){
        printf("%d ,", arr[i]);
    }
    return 0;
}