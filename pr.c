#include<stdio.h>

int main()
{
int div;
int num;
printf("Enter a number: ");
scanf("%d", &num);

if(num>=2)
for(div=2; div <= num/2; div++)
printf("\nThe number %d is a prime.", num);
else	
printf("\nThe number %d is not a prime", num);

return 0;	
}
