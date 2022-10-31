#include<stdio.h>
int main(){
	int a,b,sum,i;
	printf("Enter the RANGE upto which the sum to be calculated");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		sum = sum+i;
	}
	printf("SUM = %d",sum);
}
