#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5};
    int *p=&arr[1];
    printf(" %d %d %d ", *p, *(p+1), *(p-1));

    printf("%d ", *(p++));
    printf("%d ", *(p--));
    printf("%d ", *(p++));
    printf("%d", *p);
    return 0;
}