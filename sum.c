#include <stdio.h>
int main()
{
	int num1,num2,sum;
	
	printf("Enter The First Number : ");
	scanf("%d",&num1);
	printf("Enter The Second Number : ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	printf("Result of %d + %d = %d\n",num1,num2,sum);
	
	return (0);
}
