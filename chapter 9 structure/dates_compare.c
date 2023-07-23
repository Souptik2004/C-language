#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;

    printf("enter day of a ");
    scanf("%d", &a.day);

    printf("enter month of a ");
    scanf("%d", &a.month);

    printf("enter year a ");
    scanf("%d",&a.year);

//next
    printf("enter day of b ");
    scanf("%d", &b.day);

    printf("enter month of b ");
    scanf("%d", &b.month);

    printf("enter b year ");
    scanf("%d",&b.year);

    if(a.day==b.day && a.month==b.month && a.year== b.year){
        printf("equal");
        
    }
    else{
        printf("not equal");
    }

    return 0;

}