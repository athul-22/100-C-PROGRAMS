#include<stdio.h>
int fact(int n){
	int i,fact=1;
	for(i=0;i<=n;i++){
	 	fact = fact*i;
		
	}
	return fact;
	
}
int main(){
	int n,r,ans,a,b;
	printf("ENTER THE N\n");
	printf("ENTER THE R\n");
	scanf("%d%d",&n,&r);
	a = fact(n);
	b = fact(n-r);
	ans = a/b;
	printf("%d",a);
	
}
