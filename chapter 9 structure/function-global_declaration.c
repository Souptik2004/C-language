#include<stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
    }pokemon;
void fun(pokemon p){
        printf("%d", p.hp);
    }
int main()
{
    pokemon a;
    a.hp=60;
    fun(a);
    //printf("hp is %d", a.hp);
    return 0;
}