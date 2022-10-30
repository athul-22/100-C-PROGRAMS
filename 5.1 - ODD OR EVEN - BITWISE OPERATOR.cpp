#include<stdio.h>

	int isEven(int n){
		return (!(n & 1));
	}
	
int main(){
	int n;
	printf("Enter a Number\n");
	scanf("%d",&n);
	printf("N is\n");
	
	// calling function
	
	isEven(n)?printf("Even"): printf("Odd");

	return 0;
}
