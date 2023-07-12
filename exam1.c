//all odd numbers from a given range using UDF.

#include<stdio.h>
numbers(int i){
  int odd;
  odd=i;
}

int main(){
	int n,m;
	int i;
	
printf("Enter first number: ");
scanf("%d",&n);
printf("Enter last number:");
scanf("%d",&m);

printf("Odd Numbers are :\n");
for(i=n;i<=m;i++){
	if(i%2!=0){
		printf("%d\n",i);
		numbers(i);
	}
}	
return 0;
}
