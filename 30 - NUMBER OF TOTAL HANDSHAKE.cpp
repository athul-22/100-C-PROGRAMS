#include<stdio.h>
int main(){
	int n,total_nh;
	printf("ENTER THE NUMBER OF HANDSHAKE");
	scanf("%d",&n);
	
	total_nh = n*(n-1)/2;
	
	printf("ENTER THE NUMBER %d",total_nh);
}
