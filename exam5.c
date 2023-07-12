// find the minimum number from the given 3 numbers.
#include<stdio.h>
 main(){
    int a,b,c;
    int i;
    
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Numbers:");
    scanf("%d",&b);
    printf("Enter third Numbers:");
    scanf("%d",&c);
    
    if(a>b){
    	printf("B is min..");
   	}else if(b>c){
   		printf("C is min...");
	}else{
	    printf("A is min...");
    }
}
