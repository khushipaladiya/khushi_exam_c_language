//all odd numbers from a given 1D array using Pointer.
#include<stdio.h>

 main(){
 	int n;
 	int i;
 	int *p;
 
 	printf("Enter array size:");
 	scanf("%d",&n);
 
 	int a[n];
 	printf("Enter Elements:\n");
 	
 	for(i=0;i<n;i++){
 		printf("Enter a[%d]:",i);
 		scanf("%d",&a[i]);
	}
	printf("Odd Numbers are:\n");
	for(i=0;i<=n;i++){
	    if(i%2!=0){
		  printf("%d\n",i);
		  	p=&n;
	    } 
	}
 }
