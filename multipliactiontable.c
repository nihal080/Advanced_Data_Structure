#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter The Number : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n", i,n,i*n);
	}
}
