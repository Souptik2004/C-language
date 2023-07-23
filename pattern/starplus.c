#include<stdio.h>
int main()
{
    int n;
    printf("enter odd number only : \n");
    scanf("%d", &n);
    if(n%2!=0){

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){


            if(i==(n/2 + 1) || j==(n/2 +1)){
                printf("*");
            }
            else 
            {
                printf("#");

            }
        
        }
        printf("\n");
        }
        }
    else{
        printf("even number\n");

    }
    
    
return 0;
}