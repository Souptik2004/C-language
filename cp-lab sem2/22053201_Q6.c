//Write a C program to find all distinct triplets in a given array of integers
//whose sum is equal to zero. 

#include<stdio.h>
#include<string.h>
int main()
{
    int a[6];
    for(int i=0;i<6;i++){
        printf("enter : ");
        scanf("%d", &a[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    //finding section

    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if((a[i]+a[j]+a[k])==0){
                    printf("%d %d %d ", a[i],a[j],a[k]);
                    printf("\n");
                }
                
            }
        }
    }

    return 0;
}