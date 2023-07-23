#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        int a = j+64;
        printf("%c  ",a);
    }
    printf("\n");

    }
    return 0;
}