#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int num=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=nsp;k++){
            printf(" ");
            
        }
        nsp=nsp-1;
        
        for(int j=1;j<=num;j++){
            int d=64+j;
            printf("%c",d);
        }
        num+=2;
        
        printf("\n");
    }
    return 0;
}