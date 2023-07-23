#include<stdio.h>
int main()
{
    struct pokemon{
        int hp;
        int attack;
        float power;
    };
    struct pokemon pickachu;
    struct charizard;
    
    printf("enter pikachus hp");
    scanf("%d", &pickachu.hp);
    printf("%d", pickachu.hp);
    return 0;
}