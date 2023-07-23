#include<stdio.h>
int max(int a, int b){
    int result;
    
    if(a>b){
        result =a;

    }
    else{
        result=b;
    }
    return result;
}
int main()
{
    int a,b;
    printf("n");
    scanf("%d%d", &a, &b);
    

    printf("%d", max(a,b));
    return 0;
}