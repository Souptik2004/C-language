//add matrices
#include<stdio.h>
int main()
{
    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);
    
    int m1,n1;
    int m2,n2;

    
    printf("enter first mat\n");
    printf("enter the first matrices row and column: ");
    scanf("%d%d", &m1,&n1);
    int mat1[m1][n1];

    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%d row, %d column", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("second mat\n");
    printf("enter the second matrices row and column: ");
    scanf("%d%d", &m2,&n2);
    int mat2[m2][n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("%d row, %d column", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    if(m1==m2 && n1==n2){
    int mat3[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%d\t", mat3[i][j]);
        }
        printf("\n\n");
    }
    }
    else{
        printf("not possible\n");
    }
    return 0;
    
}