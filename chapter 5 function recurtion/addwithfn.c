#include<stdio.h>

int add(int a, int b){
    printf("sum is %d", a+b);
    return 0;
}

int main(){
    int sum;
    int a,b;
    printf("enter ");
    scanf("%d%d", &a, &b);
    sum = add(a,b);
    return 0;

}