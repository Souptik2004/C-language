#include<stdio.h>
int main(){
    int n;
    n=2;
    int a=1;
    int b=1;
    int mat[n][n];
    // int mat[2][2]={
    //                 {1,2},
    //                 {3,4},
    //                 };
    //     //if(mat[][])
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter ");
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    //seperation
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0&&j==0 || i==(n-1)&&j==(n-1)){
                a=a*mat[i][j];
            }
            else{
                b=b*mat[i][j];
            }
        }
    }
    printf("det is %d", a-b);
    return 0;
}