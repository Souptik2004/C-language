#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the number s");
    scanf("%d%d", &m, &n);

    int *p=&m;
    int *q=&n;

    int sum=*p+*q;
    printf("sum is %d", sum);
    return 0;
}