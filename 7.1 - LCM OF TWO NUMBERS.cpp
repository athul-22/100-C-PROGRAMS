#include<stdio.h>
int main(){
	int a,b,lcm;
	printf("Enter 2 Numbers : ");
	scanf("%d%d",&a,&b);
	
	lcm = (a>b) ? a:b;
	
	while(1){
		if(lcm % a ==0 && lcm % b ==0){
			printf("LCM OF %d AND %d is %d",a,b,lcm);
			break;
		}
		++lcm;
	}
}
