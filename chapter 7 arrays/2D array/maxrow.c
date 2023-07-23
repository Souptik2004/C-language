// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("enter th number ");
    scanf("%d", &n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter the number ");
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", a[i][j]);
            
        }
        printf("\n");
    }
    int max;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            max=0;
            if(max<a[j][i]){
                max=a[j][i];
            }
           
        }
        printf("max for the row is %d \n", max);
    }
    return 0;
}