#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("ENTER THE NUMBER OF COLUMNS : ");
	scanf("%d",&c);
	printf("ENTER THE NUMBER OF ROWS : ");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf(" * ");
		}
		printf("\n");
	}
}
