#include<stdio.h>
int main()
{
    int n;
    printf("ente the n:");
    scanf("%d", &n);

    int mat[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter :");
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", mat[i][j]);   
        }
        printf("\n");
    }

    return 0;
}