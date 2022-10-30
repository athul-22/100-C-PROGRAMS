#include<stdio.h>
int main(){
	int a,b,gcd,i;
	printf("\nEnter two numbers :");
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=a && i<=b;i++){
		if((a%i==0)&&(b%i==0)){
			gcd = i;
		}
	}
	printf("\nGCD of %d and %d is %d",a,b,gcd);
	printf("\n");
}
