//displaying prime number in given range ----
#include<stdio.h>
int prime_range(int n)
{
	int i,flag=0;
		for(i=2;i<n/2;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0 && n!=1) 
			return 1;	
}
int main()
{
	int i,start,end;
	printf("\n Enter the range :- ");
	scanf("%d%d",&start,&end);
	printf("Prime number from given range %d to  %d is ;-",start,end); 
	for(i=start;i<=end;i++)
	{
		if (prime_range(i)) 
			printf(" %d ",i);	
	}
	return 0;
	
}
