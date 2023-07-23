#include<stdio.h>

int fac(int n){
    if(n==0 || n==1){
        return 1;

    }
    else{
        return n*fac(n-1);
    }
}
int main()
{
    int n = 5;
    printf("factorial is %d", fac(n));
    return 0;
}