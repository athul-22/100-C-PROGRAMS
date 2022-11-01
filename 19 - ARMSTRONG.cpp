#include<stdio.h>
#include<math.h>
int main()
{
int number, temp, remainder, result = 0, n = 0 ;

printf("ENTER AN INTEGER");
scanf("%d", &number);

temp = number;

// Finding the number of digits

while (temp != 0)
{
temp /= 10;
++n;
}

temp = number;

// Checking if the number is armstrong

while (temp != 0)
{
remainder = temp%10;
result += pow(remainder, n);
temp /= 10;
}

if(result == number)
printf("%d is an Armstrong number\n", number);
else
printf("%d is not an Armstrong number\n", number);

return 0;
}
