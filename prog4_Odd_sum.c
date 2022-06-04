//sum of odd number from 1-N
#include<stdio.h>
int main()
{
	int n,sum_even=0,sum_odd=0;
	scanf("%d",&n);
	while(n)
	{
		if(n%2!=0)
			sum_odd+=n;
		n--;
	}
//	printf("\nSum of  even  number is :- %d",sum_even);
	printf("\nSum of  odd  number is :- %d",sum_odd);
	return 0;
}
