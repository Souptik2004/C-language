 #include<stdio.h>
int main()
{
    int n;
    int m;
    printf("enter the number ");
    scanf("%d", &n);
    
    int a[n];
    for(int i=0;i<=n-1;i++){
        printf("enter %dth term : ",i+1);
        scanf("%d", &a[i]);
    }
    printf("enter term\n");
    scanf("%d", &m);
    printf("%d", a[m-1]);
    return 0;
}