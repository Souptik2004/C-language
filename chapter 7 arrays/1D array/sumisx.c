 #include<stdio.h>
 int main()
 {
     int x;
     printf("enter \n");
     scanf("%d", &x);
     int arr[]={1,2,3,4,5,6,7,8,9};
     for(int i=0;i<9;i++){
         for(int j=0;j<9;j++){
             if(arr[i]+arr[j]==x){
                 printf("the numbers are %d and %d\n", arr[i], arr[j]);
             }
         }
     }
     return 0;
 }