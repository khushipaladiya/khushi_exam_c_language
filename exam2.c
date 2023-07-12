//find a cube of all elements from a given 2D array.
#include<stdio.h>
main(){
	int n,i,j;
	

	printf("Enter array size:");
	scanf("%d",&n);
	
int a[n][n];
	
	printf("Enter array Elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Cube of array:\n");
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=a[i][j]*a[i][j]*a[i][j];
			printf("%d\n",a[i][j]);
		
		}
	}
}
