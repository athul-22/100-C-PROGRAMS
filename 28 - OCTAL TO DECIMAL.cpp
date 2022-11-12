#include<stdio.h>
#include<math.h>

//BINARY TO DECIMAL FUNCTION

int o_to_d(long int n){
	long int oct = 0,i=1,rem =0;
	
	while(n!=0){
	rem = n%8;
	
	oct = oct+(n%8)*i;
	n = n/8;
	i=i*10;
	
	}
	return oct;
}

int main(){
	long int n,rem,ans;
	printf("ENTER THE BINARY NUMBER TO CONVERT :");
	scanf("%ld",&n);
	ans = o_to_d(n);
	printf("%d IS THE REQUIRED NUMBER",ans);
}
