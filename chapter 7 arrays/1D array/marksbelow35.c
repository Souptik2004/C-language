#include<stdio.h>
int main()
{
    int n;

    printf("enter the n");
    scanf("%d", &n);

    int marks[n];
    printf("enter the marks\n");

    for(int i=0;i<=n-1;i++){
        printf("enter the %dth term : ", i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("%d  ", marks[i]);
    }
    printf("\n");
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            printf("%d and the marks is %d\n", i, marks[i]);
        }
        
    }
    return 0;

}