#include<stdio.h>
int main(){
	int n,temp,rnum;
	
	printf("ENTER THE NUMBER TO BE REVISED\n");
	
	scanf("%d",&n);
	
	while(n!=0){
		temp = n%10;
		rnum = rnum*10+temp;
	
	}
	printf("%d",rnum);
	
	
}
