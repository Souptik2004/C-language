#include<stdio.h>
int main()
{
    int n;
    int m;
    printf("enter the number rows");
    scanf("%d", &n);

    printf("enter the number column");
    scanf("%d", &m);


    for(int i=1;i<=n;i++){ //outer loop that prints number of row
        for(int j=1;j<=m;j++){//number of column
        printf("*");
        }
        printf("\n");
    }
    
    return 0;
}