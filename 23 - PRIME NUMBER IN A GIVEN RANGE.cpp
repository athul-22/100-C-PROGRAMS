#include<stdio.h>
int main(){
	int a,b,i,flag;
	
	printf("Enter the range of A & B\n");
	scanf("%d\n%d",&a,&b);
	
	while(a<b){
		for(i=2;i<=a/2;i++){
			if(a%i==0){
				flag=1;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",a);
			++a;
		}
		
	}
}
