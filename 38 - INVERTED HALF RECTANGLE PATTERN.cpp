#include<stdio.h>
int main(){
	int r,i,j;
	printf("ENTER THE NUMBER OF ROWS");
	scanf("%d",&r);
	
	for(i=r;i>=1;i--){
		for(j = 1; j <= i; ++j){
			printf("*");
		}
		printf("\n");
	}
}
