//find duplicate
#include<stdio.h>
int main()
{
    int n;
    int a[]={1,2,3,4,9,6,7,3,9,10};
    
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]==a[j] && i!=j){
                printf("%d and %d\n", i, a[i]);
                
            }
        }
    }
    return 0;
    
}