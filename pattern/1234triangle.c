#include<stdio.h>
int main()
{
    int n;
    printf("hanlo \n enter the number ");
    scanf("%d", &n);
int a;
    a=64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("%c", a);
        a= a+1;
    }
    printf("\n");

    }
    return 0;
}