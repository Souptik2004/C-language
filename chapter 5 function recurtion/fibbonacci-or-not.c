#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fib(int n){
    int fib=0;
    if(pow((5*(n^2)-4), .5)%1==0){
        fib=1;
    }
    else if((5*(n^2)+4)%1==0){
        fib=1;
    }
    else{
        fib=0;
    }
    return fib;
}
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);

    if(fib(n)==1){
        printf("fibonacci ");
    }
    else{
        printf("non fibonacci");
    }

    return 0;
}