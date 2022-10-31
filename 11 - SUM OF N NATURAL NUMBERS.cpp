#include<stdio.h>
int main(){
	int sum=0,n,i;
	printf("Enter the value for N - upto which the sum to be calculated");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum  = sum+i;
	}
	printf("SUM = %d",sum);
}
