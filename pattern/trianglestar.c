#include<stdio.h>
int main()
{
    int n;

    printf("enter the number ");
    scanf("%d", &n);

    for(int j=1;j<=n;j++){
    for(int i=1;i<=j;i++){
        printf("* ");
    }
    printf("\n");
    }

    return 0;
}