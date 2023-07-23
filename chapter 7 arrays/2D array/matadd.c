//add matrices
#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    
    int mat1[n][n],mat2[n][n];
    printf("enter first mat\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d row, %d column", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("second mat\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d row, %d column", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    int mat3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}