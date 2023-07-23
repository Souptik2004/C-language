//lcm
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int transpose[3][3];
    int str[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            str[i][j]= rand()%9+1;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", str[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i] = str[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}