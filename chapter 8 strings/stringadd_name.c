#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char name[40];
    char fname[10];
    char sname[10];
    char lname[10];
    printf("enter the first name\n");
    gets(fname);
    printf("enter the first name\n");
    gets(sname);



    //enter the first name into the name;
    for( i=0;name[i]!= '\0' ;i++)
        name[i]=fname[i];
    
        name[i]=' ';

    for(j=0;)
    puts(name);


    return 0;
}