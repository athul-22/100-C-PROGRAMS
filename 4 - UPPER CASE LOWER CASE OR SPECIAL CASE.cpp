#include<stdio.h>
int main(){
	char ch;
	int ascii;
	printf("Enter the Chacracter\n");
	scanf("%c",&ch);
	printf("%d %c\n",ch,ch);
	
	if(ch>=65 && ch<=90){
		printf("UPPER CASE ALPHABET\n");
	}
	else if(ch>=97 && ch<=122){
		printf("LOWER CASE ALPHABET\n");
	}
	else{
		printf("SPECIAL CHARACTER\n");
	}
}
