#include<stdio.h>
int main(){
	int rem, revn,n,num;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	num = n;
	while(n != 0){
		
		rem = n%10;
		revn = revn*10+rem;
		n = n/10;
	}
	
	
	if(revn == num){
	 printf("%d = %d PALINDROME",revn,num);
	 
	}else{
		printf("%d = %d NOT",revn,num);
	}
}
