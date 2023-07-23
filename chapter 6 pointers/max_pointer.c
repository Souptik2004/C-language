#include<stdio.h>
int max(int *p, int *q){
    int max;
    if(*p>*q){
        max=*p;
    }
    else{
        max=*q;
    }
    return max;
}
int main()
{
    int m,n;
    printf("enter the number ");
    scanf("%d%d", &m, &n);

    printf("max is %d ", max(&m, &n));

    return 0;
}