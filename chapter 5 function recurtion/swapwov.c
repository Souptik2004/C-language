#include<stdio.h>
void swap(int a,int b){
    b=b*a;
    a=b/a;
    b=b/a;
    printf("a is %d and b is %d ", a,b);
}

int main()
{
    int a,b;
    printf("enter the number \n");
    scanf("%d%d", &a, &b);

    swap(a,b);
    return 0;
}