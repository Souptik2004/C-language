#include<stdio.h>
int n;
void doubleten(int arr[n]){
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]= arr[i]*2;
        }
        else{
            arr[i]=10+arr[i];
        }

    }
}

int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int arr[n];

    //input section
    for(int i=0;i<n;i++){
        printf("enter the number ");
        scanf("%d", &arr[i]);
    }

    //printing , normal form
    for(int i=0;i<n;i++){
        printf("%d\t\n",arr[i] );
    }
    doubleten(arr);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i] );
    }
    



    return 0;
}