#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
    }pokemon;
    typedef struct legendaryPokemon{
        int specialattack;
        pokemon normal;
    }legendary;
    legendary mewto;
    
    typedef struct godPokemon{
        char ability[10];
        legendary pokemon; 
    }godPokemon;

    godPokemon aurcus;
    aurcus.pokemon.normal.hp;

    
    
    return 0;
}
