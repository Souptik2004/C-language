#include<stdio.h>
#include<time.h>
int main() {
	int n;
	printf("enter the size of square matrix\n");
	scanf("%d",&n);
    srand(time(0));
    int rand();
    int y;
	printf("press 1 for clockwise\npress 2 for  anti-clockwise\n");
	scanf("%d",&y);
	
	
	int a[n][n];
	int row=n;
	int col=n;
	
	for(int i=0; i<row;i++) {
		for(int j=0;j<col;j++) {
			a[i][j]=rand()%90 + 9;;
			}
	}
	
	if(y==2) {
	for(int i=0; i<row;i++) {
		for(int j=0;j<col;j++) {
			printf("%d  ",a[i][j]);
			}
			printf("\n");
	} 
	
	int m=a[0][0];
	for(int j=0;j<n-1;j++){
	    a[0][j]=a[0][j+1];
	}
	for(int i=0;i<n-1;i++){
	    a[i][n-1]=a[i+1][n-1];
	}
	for(int j=n-1;j>0;j--){
	    a[n-1][j]=a[n-1][j-1];
	}
	
	for(int i=n-1;i>0;i--){
	    a[i][0]=a[i-1][0];
	}
	a[1][0]=m;
	printf("\n");
	for(int i=0; i<row;i++) {
		for(int j=0;j<col;j++) {
			printf("%d  ",a[i][j]);
			}
			printf("\n");}
	}
	
	else if(y==1){	
	for(int i=0; i<row;i++) {
		for(int j=0;j<col;j++) {
			printf("%d  ",a[i][j]);
			}
			printf("\n");
	} 
	
	
	int m=a[0][0];
	for(int i=0;i<n-1;i++){
	    a[i][0]=a[i+1][0];
	}
	for(int j=0;j<n-1;j++){
	    a[n-1][j]=a[n-1][j+1];
	}
	for(int i=n-1;i>0;i--){
	    a[i][n-1]=a[i-1][n-1];
	}
	
	for(int j=n-1;j>0;j--){
	    a[0][j]=a[0][j-1];
	}
	a[0][1]=m;
	printf("\n");
	for(int i=0; i<row;i++) {
		for(int j=0;j<col;j++) {
			printf("%d  ",a[i][j]);
			}
			printf("\n");}
	}
	
	
return 0;

}