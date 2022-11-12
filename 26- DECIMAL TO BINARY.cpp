#include<stdio.h>
d_to_b(long int n){
	int rem,bin,dec,i=1;
	
	while(n != 0){
		rem = n%2;
		n = n/2;
		bin = bin+rem*i;
		i=i*10;
	} 
	
	return bin;
	
}
int main(){
	int n;
	long int ans;
	printf("ENTER THE DECIMAL NUMBER TO CONVERT\n");
	scanf("%d",&n);
	
	ans = d_to_b(n);
	printf("%ld IS THE BINARY FORMAT",ans);
	
}
