#include<stdio.h>
int main(){
	int n,i=0;
	printf("ENTER THE NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0){
			printf("%d\n",i);
		}
	}
}
