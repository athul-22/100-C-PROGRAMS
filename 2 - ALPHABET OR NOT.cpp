#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character to check \n");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z' )|| (ch>='A' && ch<='Z')){
		printf("ALPHABET CHARACTER");
	}else{
		printf("NOT A ALPHABET CHARACTER");
	}
}
