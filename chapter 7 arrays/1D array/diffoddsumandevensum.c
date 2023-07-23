#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};

int odd=0;
int even=0;

    for(int i=0;i<9;i++){
        if(arr[i]%2!=0){
            odd = odd+arr[i];
        }
        else{
            even =even+arr[i];
        }
    }
    if(odd>even){
        printf("diff is %d", odd-even);
    }
    else{
        printf("diff is %d", even-odd);
    }
}
