#include<stdio.h>
int main()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+3);j++){
            if(i+j<=n || i+j >= 2*n+1){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}