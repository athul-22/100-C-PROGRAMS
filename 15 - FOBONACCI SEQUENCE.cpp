#include<stdio.h>
int main(){
	int a=0,b=1,n,sum,temp;
	printf("ENTER UPTO WHICH TERM FIBONACCI SERQUENCE NEEDED ");
	scanf("%d",&n);
	sum = a+b;
	while(sum<=n){
		printf("%d",sum);
		temp = a;
		a = b;
		b = sum;
		sum = a+b;
	}
		printf("%d \n",sum);
}
