#include<stdio.h>
int main(){
	int year;
	
	printf("Enter the year");
	scanf("%d",&year);
	
	if(year%4 == 0){
		printf("%d is a leap year");
	}else if(year%100 == 0){
		printf("%d is not a leap year");
	}else if(year%400 == 0){
		printf("%d is not a leap year");
	}else{
		printf("NOT A LEAP YEAR");
	}
	
}
