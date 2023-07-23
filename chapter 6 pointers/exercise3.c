#include<stdio.h>
int main()
{
    char p[100]={"KIIT2023"};
    printf("%s", p+p[3]-p[1]);
    return 0;
}