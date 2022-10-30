#include<stdio.h>
int main(){
	int n,temp,finval;
	printf("Enter a Number\n");
	scanf("%d",&n);
	
	temp = n/2;
	finval = temp*2;
	
	if(finval ==n){
		printf("EVEN");
	}else{
		printf("ODD");
	}
	
	return 0;
}
