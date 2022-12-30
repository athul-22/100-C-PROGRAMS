#include<stdio.h>
int main(){
	int r,i,j;
	printf("ENTER THE NUMBER OF ROWS");
	scanf("%d",&r);
	
	for(i=0;i<r;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
