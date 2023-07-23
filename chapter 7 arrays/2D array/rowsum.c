#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter : ");
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            count=count+a[i][j];
        }
        printf("sum is %d\n", count);
    }
    return 0;
}