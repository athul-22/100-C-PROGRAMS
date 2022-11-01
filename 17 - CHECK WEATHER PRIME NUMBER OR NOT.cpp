#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	for(i=2;i<=(n/2);i++){
		if(n%i==0){
			break;
		}
		
	}
	if(i>(n/2)){
			printf("PRIME NUMBER");
		}else{
			printf("NOT");
		}
}
