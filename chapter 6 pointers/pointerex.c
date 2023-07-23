#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int *p=&n;
    int **q=&p;

    printf("\t%d\t%d\t%d", n, *p, **q);
    return 0;

}