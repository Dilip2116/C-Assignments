//sum of digits program
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("\nEnter a number:- ");
	scanf("%d",&n);
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	printf("\nSum of digit of a given number is %d",sum);
	return 0;
	
}
