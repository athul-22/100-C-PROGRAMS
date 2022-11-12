#include<stdio.h>
d_to_o(long int n){
	int rem,oct,dec,i=1;
	
	while(n != 0){
		rem = n%8;
		n = n/8;
		oct = oct+rem*i;
		i=i*10;
	} 
	
	return oct;
	
}
int main(){
	int n;
	long int ans;
	printf("ENTER THE DECIMAL NUMBER TO CONVERT\n");
	scanf("%d",&n);
	
	ans = d_to_o(n);
	printf("%ld IS THE BINARY FORMAT",ans);
	
}
