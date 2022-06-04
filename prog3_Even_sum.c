//sum of even numbers from 1-N ---
#include<stdio.h>
int main()
{
	int n,sum_even=0,sum_odd=0,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%2!=0)
			sum_odd+=i;
		else
			sum_even+=i;	
	
	}
	printf("\nSum of  even  number is :- %d",sum_even);
	printf("\nSum of  odd  number is :- %d",sum_odd);
	return 0;
}
