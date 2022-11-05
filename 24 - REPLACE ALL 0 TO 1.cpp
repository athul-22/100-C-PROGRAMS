#include<stdio.h>
int Convert(int number);
int replace(int number);

int Convert(int number){
   if (number == 0){
      return 1;
	}
   else{
      return replace(number);
    }
}

int replace(int number){
   if (number == 0)
   return 0;
   //check last digit and change it if needed
   int digit = number % 10;
   if (digit == 0)
   digit = 1;
   // Convert remaining digits and append to its last digit
   return replace(number/10) * 10 + digit;
}
int main(){
	
	int number;
	
	printf("Enter the number");
	scanf("%d",&number);
	printf("%d is the number",Convert(number));
	
}1


