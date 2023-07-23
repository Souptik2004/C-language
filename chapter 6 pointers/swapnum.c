#include<stdio.h>
void swap(int *p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int m,n;
    printf("enter the number\n");
    scanf("%d%d", &m, &n);
    swap(&m,&n);
    printf("after the swapping m and is %d , %d", m,n);
    
    
    return 0;
}