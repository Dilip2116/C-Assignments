//program to check given number is Armstrong  or not ----
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	int s,t,c=0,p,rem;
	
	printf("\nEnter a number:- ");
	scanf("%d",&n);
	s=n;
	t=n;
	while(n>0)
	{
		c++;
		n=n/10;
	}
	while(s!=0)
	{
		rem=s%10;
		p=pow(rem,c);
		sum+=p;
		s=s/10;
	}
	if(sum==t)
		printf("\nGiven number is armstrong");
	else
		printf("\nGiven number is not a armstrong");
	return 0;
	
}
