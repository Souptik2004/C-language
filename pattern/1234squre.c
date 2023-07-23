#include<stdio.h>
int main()
{
    int n;
    int m;
    printf("enter the number rows");
    scanf("%d", &n);

    //printf("enter the number column");
    //scanf("%d", &m);


    for(int i=1;i<=n;i++){ // no of rows as i 
        for(int j=1;j<=n;j++){// no of column in j
        printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}