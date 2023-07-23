// alpj=habeticle order
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter ");
    gets(str);
    puts(str);
    int l=strlen(str);
    int a[10];
    for(int m=0;str[m]!='\0';m++){
        a[m]=str[m];
    }
    for(int n=0;n<l;n++){
        printf("%d ", a[n]);
    }
    //sorting
    int temp;
    int i, j;  
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        { if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");
    for(i=0; i<l; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int n=0;n<l;n++){
        printf("%c", a[n]);
    }
    return 0;
}