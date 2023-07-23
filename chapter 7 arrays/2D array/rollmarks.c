// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n;
    int m;
   
    printf("enter the element\n");
    printf("enter students \n");
    scanf("%d", &n);
     printf("enter column \n");
    scanf("%d", &m);
    
    
    int arr[n][m];
    
    for(int  i=0;i<n;i++){
        for(int j=0;j<m;j++){
           printf("%d roll , %d marks :", i+1, j+1);
           scanf("%d", &arr[i][j]);
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}