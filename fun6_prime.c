//function to check given number is prime or not ----
#include<stdio.h>
int prime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else 
		return 0;
}
int main()
{
	int num;
	printf("\n Enter a number:- ");
	scanf("%d",&num);
	if(prime(num)) 
	{
		printf("%d is PRIME\n",num);
	}
	else
	{
		printf("%d is NOT PRIME\n",num);
	}
	return 0;
	
}
