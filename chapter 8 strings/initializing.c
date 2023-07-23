#include<stdio.h>
#include<string.h>
int main()
{
    char str[]=("physics wallah");
    printf("%s\n", str);

    str[1]=97;
    printf("%s\n", str);

    return 0; 

}