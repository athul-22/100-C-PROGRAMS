#include<stdio.h>
#include<math.h>

//BINARY TO DECIMAL FUNCTION

int b_to_d(long int n){
	int dec = 0,i=0,rem =0;
	
	while(n!=0){
	rem = n%10;
	n = n/10;
	dec = dec+rem*pow(2,i);
	i++;
	
	}
	return dec;
}

int main(){
	long int n,rem,ans;
	printf("ENTER THE BINARY NUMBER TO CONVERT");
	scanf("%ld",&n);
	ans = b_to_d(n);
	printf("%d IS THE REQUIRED NUMBER",ans);
}
