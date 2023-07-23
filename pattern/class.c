#include<stdio.h>
int main()
{
    for(int i=0;i<=3;i++){
        for(int j=0;j<=i+1 z;j++){
            if(i==0 || j==i+2){
                printf("%d", i+1);
            }
            else{
            printf("*");
            }
        }
        printf("\n");
    }
    
    
    
    return 0;

}