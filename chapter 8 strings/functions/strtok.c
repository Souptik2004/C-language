#include<stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);
    toupper(str[100]);
for(int i=0;i!='\0';i++){
    printf("%s", toupper(str[i]));

}

   return 0;
}