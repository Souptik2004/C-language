#include<stdio.h>
#include<string.h>

typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char name[10];

}pokemon;
typedef pokemon * pikka;
int main()
{
    pokemon pikachu;
    pikka x=&pikachu;

    int *y=&pikachu.hp;

    printf("%p\n%p", x,y);

    return 0;
}