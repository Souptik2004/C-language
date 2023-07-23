#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("[%d]  ", arr[i][j]);
            }
            else if(i+j==n-1){
                printf("{%d}  ", arr[i][j]);
            }
            else{
                printf(" *    ");
            }
        }
        printf("\n\n");
    }

    int major=0, minor=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                major=major+arr[i][j];
            }
            else if(i+j==n-1){
                minor=minor +arr[i][j];
            }
        }
    }
    printf("major addition is: %d\nminor addition is: %d", major, minor);

    return 0;
}