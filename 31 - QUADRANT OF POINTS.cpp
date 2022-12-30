#include<stdio.h>
int main(){
	int m,n;
	printf("ENTER M & N CO-ORDINATES\n");
	scanf("%d%d",&m,&n);
	
	if(m==0&&m==0){
		printf("ORIGIN");
	}
	else if(m>0&&n>0){
		printf("1 ST QUADRANT");
	}
	else if(m<0&&n>0){
		printf("2 ST QUADRANT");
	}
	else if(m<0&&n<0){
		printf("3 ST QUADRANT");
	}
	else if(m>0&&n<0){
		printf("4 ST QUADRANT");
	}
	
}
