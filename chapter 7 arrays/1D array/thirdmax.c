 //second largest number 
 #include<stdio.h>
 int main()
 {
     int arr[]={1,2,3,4,5,6,7,8,9};
     int max=0;
     for(int i=0;i<9;i++){
         if(arr[i]>max){
             max=arr[i];
         }
     }
     int smax=0;
     for(int i=0;i<9;i++){
         if(arr[i]!=max && arr[i]>smax){
             smax=arr[i];
         }
     }
     int tmax=0;
     for(int i=0;i<9;i++){
         if(arr[i]!=max && arr[i]!=smax && arr[i]>tmax){
             tmax=arr[i];
         }
     }
     printf("max is %d", max);
     printf("second max is %d", smax);
     printf("third max is %d", tmax);
     ;
     return 0;
 }