#include<stdio.h>
int main()
{
    //add two pointer;
    int m,n;
    printf("enter the numbers: ");
    scanf("%d%d", &m,&n);
    
    int *p=&m;
    int *q=&n;
    int sum=*p+*q;
    printf("%d", sum);

    return 0;
}