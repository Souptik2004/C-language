#include<stdio.h>
int main()
{
    struct pokemon{
        int health;
        int hp;
        int attack;
        int speed;

    }a,b;
    struct legendryPokemon{
        struct pokemon mewto;
        int specialattack;
    };  

    

    return 0;
}