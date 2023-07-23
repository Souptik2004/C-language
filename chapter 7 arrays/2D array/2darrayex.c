#include<stdio.h>
int main()
{
    int i,j;
    
    int n;
    printf("enter \n");
    scanf("%d", &n);
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter %d row %d col", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}