// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int count =0;
    for(int i=0;i<9;i++){
        if(arr[i]>5){
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}