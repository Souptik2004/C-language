#include<stdio.h>
int main()
{
    int n;
    n=3;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter: ");
            scanf("%d", &a[i][j]);
        }
    }

    //transpose of a matrix
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    printf("%d\t",a[j][i] );
                }
                else{
                    printf("%d\t", a[i][j]);
                }

            }
            printf("\n");
        }
        
           
        

    return 0;
}