#include<stdio.h>
int main(){
    int n;
    n=5;int m=10;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", m);
        }
        printf("\n");
    }
    return 0;
}