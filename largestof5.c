#include <stdio.h>
int main()
{
	int i=1,large=0,num;
	while(i<=5)
	{
		printf("Enter The %d number : ",i);
		scanf("%d",&num);
	        if (num>large)
	        {
	        	large=num;
	        }
		i=i+1;
	}
	printf("The Largest of 5 numbers is %d\n",large);
}
