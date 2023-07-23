#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        int page;
        float price;
        char name[10];
    }A,B,C,D;
    char namee[10];

    printf("enter book A ");
    printf("page");
    scanf("%d", &A.page);
    printf("price");
    scanf("%f", &A.price);
    printf("name");
    gets(namee[10]);
    strcpy(A.name, namee[5]);


    printf("enter book B ");
    printf("page");
    scanf("%d", &B.page);
    printf("price");
    scanf("%f", &B.price);
    printf("name");
    gets(B.name);

    printf("enter book A ");
    printf("page");
    scanf("%d", &C.page);
    printf("price");
    scanf("%f", &C.price);
    printf("name");
    gets(C.name);

    printf("1. for name\n2. for pages\n3. for price");
    int n;
    scanf("%d", &n);

    if(n==1){
        printf("%d\n%d\n%d", A.name, B.name, C.name);
    }
    else if(n==2){
        printf("%s\n%s\n%s\n", A.page, B.page, C.page);
    }
    else{
        printf("%f\n%f\n%f", A.price, B.price,C.price);
    }

    return 0;
}