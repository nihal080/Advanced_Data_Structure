#include<stdio.h>
int main()
{
	int num1,num2,add_result,sub_result,mul_result,div_result,mod_result;
	
	printf("Enter the number 1:");
	scanf("%d",&num1);
	printf("Enter the number 2:");
	scanf("%d",&num2);

	add_result=num1+num2;
	sub_result=num1-num2;
	mul_result=num1*num2;
	div_result=num1/num2;
	mod_result=num1%num2;

	printf("addition : %d\n",add_result);
	printf("subtraction : %d\n",sub_result);
	printf("multiplication : %d\n",mul_result);
	printf("division : %d\n",div_result);
	printf("modulus : %d\n",mod_result);

	return 0;
}
