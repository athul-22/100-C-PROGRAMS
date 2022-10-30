#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the values of A & B\n");
	scanf("%d%d",&a,&b);
	
	// A=4 B=5
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("A = %d and B = %d are swaped numbers",a,b);
	printf("A = %d and B = %d are swaped numbers",b,a);
	
	return 0;
}
