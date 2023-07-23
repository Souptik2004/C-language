//we can access all the member inside the structure,
#include<stdio.h>// where as we can use only one user per time#include<stdio.h>
#include<string.h>


int main()
{
    union book{
        
        int page;
        float price;
        char namee[10];
    }A,B,C,D;
    

    printf("enter book A ");
    printf("price");
    scanf("%f", &A.price);
    printf("page");
    scanf("%d", &A.page);
    

    printf("%f", A.price );
    return 0;
}