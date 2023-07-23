#include<stdio.h>
int main()
{
    char grade;
    printf("ente the grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("excellence");
            break;
        case 'B':
            printf("good");
    
        default:
            printf("invalid");
        
    
    }
    

    return 0;
}