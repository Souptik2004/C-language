#include<stdio.h>

int swap(int m, int n){
    int temp = m;
    m=n;
    n=temp;
    printf("%d is m and %d is n", m, n);
}

int main()
{
    int n,m;
    printf("enter the number");
    scanf("%d%d", &m, &n);

    swap(m,n);

    return 0;
}