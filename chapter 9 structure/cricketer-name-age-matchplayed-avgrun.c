#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct player{
        int age;
        char name[10];
        int match;
        int avg;
    }player;

    player arr[3];

    for(int i=0;i<3;i++){
        printf("enter name ");
        scanf("%[^\n]s", arr[i].name);
        
        printf("enter the age ");
        scanf("%d", &arr[i].age);

        printf("enter the match played ");
        scanf("%d", &arr[i].match);

        printf("enter the avg run ");
        scanf("%d", &arr[i].avg);    
    }

    for(int i=0;i<3;i++){
        printf("name is %s\n", arr[i].name);
        printf("avg run is %d\n", arr[i].avg);
        printf("match played %d\n", arr[i].match);
        printf("age is %d\n", arr[i].age);
    }

    return 0;
}