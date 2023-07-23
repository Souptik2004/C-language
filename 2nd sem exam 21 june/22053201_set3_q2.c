#include<stdio.h>
int main()
{
    int n;
    printf("enter  n");
    scanf("%d", &n);
    int str[n][n];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            str[i][j] = i*j;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",str[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //transposen
    char transpose[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            transpose[j][i] = str[i][j];
        }
        
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// int main()
// {
//     int na;
//     printf("jell0 eotdla ");
//     return 0;
// }