#include<stdio.h>
void ind(){
    printf("namaste\n");
}
void aus(){
    printf("hello\n");
}
int main(){
    int n;
    printf("1. if you are indian\n2. if you are austrellian\n");
    scanf("%d", &n);

    if(n==1){
        ind();

    }
    else{
        aus();
    }
}