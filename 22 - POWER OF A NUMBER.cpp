#include<stdio.h>
#include<math.h>
int main(){
	int n,ex,result;
	
	printf("Enter the number\n");
	scanf("%d%d",&n,&ex);
	result = pow(n,ex);
	
	printf("%d",result);
}
