#include<stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        int d = 64+j;
        printf("%c", d);
        
    }
    printf("\n");
    
    
    
    }
    return 0;
}