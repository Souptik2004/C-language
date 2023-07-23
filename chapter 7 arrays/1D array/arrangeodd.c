
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter\n");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%(9+1-1)+1;
    }
    for(int i=0;i<n;i++){
        // if(a[i]%2==0){
        //     for(i=0;i<n;i++){
        //         a[i]
        //     }
        //}
        printf("-5%d",a[i]);
}
return 0;
}