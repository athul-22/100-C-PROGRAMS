#include<stdio.h>
#include<math.h>
int main(){
	int n,fact;
	printf("Enter the number : ");
	scanf("%d",&n);
	fact = tgamma(n + 1); 
	printf("!%d = %d",n,fact);
}
