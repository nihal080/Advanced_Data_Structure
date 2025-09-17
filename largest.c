#include <stdio.h>
int main()
{
	int num1,num2;
	printf("enter the first number : ");
	scanf("%d",&num1);
	printf("enter the second number : ");
	scanf("%d",&num2);

	if (num1>num2)
	{
		printf("Largest of %d and %d is : %d\n ",num1,num2,num1);
	}
	else
	{
		printf("Largest of %d and %d is : %d\n ",num1,num2,num2);
	}
	return 0;
}
