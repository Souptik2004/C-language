#include<stdio.h>
int main()
{
    int n;
    printf("enter the n: ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter arr[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int p=0;p<n;p++){
                for(int q=0;q<n;q++){

                    if(arr[i][j]>arr[p][q]){

                        int temp=arr[i][j];
                        
                        arr[i][j]=arr[p][q];
                        arr[p][q]=temp;
                    }
                }
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}