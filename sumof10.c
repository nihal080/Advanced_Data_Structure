#include <stdio.h>
int main()
{
	int i,sum=0;
	while(i<=10)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("Sum of First 10 numbers is %d\n",sum);
}
