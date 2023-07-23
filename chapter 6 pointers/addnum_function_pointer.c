#include<stdio.h>

int sum(int *p, int *q){
    int sum = *p+*q;
    return sum;
}
int main()
{
    int m,n;
    printf("enter the number : ");
    scanf("%d%d", &m, &n);
    printf("sum is %d", sum(&m,&n));


    return 0;
}