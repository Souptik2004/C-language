#include<stdio.h>
typedef int*  pointer;

int main()
{
    int a=4, b=6;

    pointer x=&a;
    pointer y=&b;

    printf("%p\n", x);
    printf("%p", y);
    return 0;
}