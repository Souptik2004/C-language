#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
        if(i%2!=0){
            printf("%d", j);
        }
        else{
            int d = j+64;
            printf("%c", d);
        }
        
        
        
        }
    printf("\n");    
    }
    

    
    return 0;

}