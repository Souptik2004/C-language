#include<stdio.h>
int main()
{
    typedef struct book{
        int page;
        int price;
    } sk;

    sk a;
    sk b;
    sk c;

    a.page=30;
    a.price = 45;

    printf("%d\n%d", a.page, a.price);
    return 0;
}