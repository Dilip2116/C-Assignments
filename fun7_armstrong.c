#include<stdio.h>
#include<math.h>
void armstrong(int n)  //function check number is armstrong or not---
{
	int sum=0;
	int s,t,c=0,p,rem;
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
	
}
int main()
{
	int num;
	printf("\nEnter a number:- ");
	scanf("%d",&num);
	armstrong(num);
	return 0;
}
