#include <stdio.h>
int isEven(int n)
{
int even_no = 1;
for(int i=1; i <= n; i++)
even_no = !even_no;
return even_no;
}

int main()
{
int n;
printf("\nEnter a number : ");
scanf("%d",&n);
printf("\n");
printf("\n%d is ",n);
isEven(n) ? printf("EVEN ") : printf("ODD");

return 0;
}
