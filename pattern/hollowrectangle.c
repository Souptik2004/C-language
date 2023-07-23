#include<stdio.h>
int main()
{
    int n;
    printf("enter the number column");
    scanf("%d", &n);


    for(int i=1;i<=n;i++){ //outer loop that prints number of row
        for(int j=1;j<=n;j++){//number of column
        
        if(i==1 || j==1 || i==n || j==n){
            printf("* ");
        }
        else{
            printf("  ");
        }
        }
        printf("\n");
    }
    
    return 0;
}