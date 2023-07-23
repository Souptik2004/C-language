#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[10];
    int age;
    int marks;
    int height;
}student;
void check(student p,student q){
    if(p.age==q.age){
        if(p.marks==q.marks){
            printf("equal");
        }
        else{
        printf("not equal");
        }
    }
    else{
        printf("not equal");
    }
}

int main()
{
    student arr[3];

    strcpy(arr[0].name, "virat");
    arr[0].age=23;
    arr[0].marks=400;

    strcpy(arr[1].name, "virat");
    arr[1].age=23;
    arr[1].marks=100;

    strcpy(arr[2].name, "mohit");
    arr[2].age=23;
    arr[2].marks=100;   

    check(arr[0], arr[2]);
    
    return 0;
}