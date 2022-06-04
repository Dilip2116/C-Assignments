//program to check given number is pallindrome or not -----
#include<stdio.h>
int main()
{
	int n,sum=0,t;
	printf("\nEnter a number:- ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	if(sum==t)
		printf("\nGiven number is pallindrome");
	else
		printf("\nGiven number is not a pallindrome");
	return 0;
	
}
