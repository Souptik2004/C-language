//gcd of two numbers 
#include<stdio.h>

int gcd(int m,int n){
    if(m>n){
        if(m%n==0){
        printf("n is the GCD")   
        }
        
    }
    else if(n>m){

    }
}

int main()
{
    int m=6,n=9;
    printf("GCD is %d ", gcd(m,n));
    return 0;
}