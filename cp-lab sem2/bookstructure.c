#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int originalnum =n;
    int result;
    int reminder=0;

    while(n>0){
        reminder=n%10;
        result+= reminder*reminder*reminder;
        n/10;
    }
    if(n==result){
        printf("amstrong number");

    }
    else{
        printf("not");
    }

    return 0;
}