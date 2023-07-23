/*
* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);
    
    /*for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
    */
    for(int i=1;i<=n;i++){
        for(int j=n;j=1;j--){
            printf("*");
            if(n==0){
                break;
            }
        }
        printf("\n");
    }
    
    return 0;
}