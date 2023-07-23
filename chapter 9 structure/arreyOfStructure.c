#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[10];
    }pokemon;
    pokemon arr[3];

    strcpy(arr[0].name,"pikachu");
    arr[0].hp = 10;
    arr[0].attack=60;
    arr[0].speed=70;

    strcpy(arr[1].name,"charizard");
    arr[1].hp = 100;
    arr[1].attack=90;
    arr[1].speed=80;

    strcpy(arr[2].name,"mewto");
    arr[2].hp = 110;
    arr[2].attack=90;
    arr[2].speed=60;
    int i=0;
    while(i<3){
        printf("%s\n", arr[i].name);
        printf("%d\n", arr[i].speed);
        printf("%d\n", arr[i].attack);
        printf("%d\n", arr[i].hp);
        i++;
    }


    return 0;
}