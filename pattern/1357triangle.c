#include<stdio.h>
int main()
{
    int n;
    printf("enter thr number ");
    scanf("%d", &n);
    int d=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        
        printf("%d ", j);
        j++;   
    }
    printf("\n");
    }
    return 0;
}