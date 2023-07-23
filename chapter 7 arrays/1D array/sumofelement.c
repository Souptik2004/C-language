#include<stdio.h>
int main()
{
    int n;
    int d=0;
    printf("enter the number \n");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("numbers :  ");
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++){
        d=d+a[i];
    }
    printf("sum is %d", d);
    return 0;
}