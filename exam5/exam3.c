// all leap years from a given range into a text file.
#include<stdio.h>
main(){
	int n,m;
	int i;
	FILE *p;
    p=fopen("year.txt","w");
	
	if(p==NULL){
		printf("File cannotm create...");
	}else{
		printf("File created..\n");
		printf("Enter first year:");
		scanf("%d",&n);
		printf("Enter last year:");
		scanf("%d",&m);
		  for(i=n;i<=m;i++){
		  	if(i%4==0 || i%100==0 || i%400==0){
		  		fprintf(p,"Leap years are: %d\n",i);
			  }
		  }  
	}
 
}
