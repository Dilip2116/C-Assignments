//sum of digit in a number-----
#include<stdio.h>
int digit_sum(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}
int main()
{
	int num;
	printf("\nEnter a number :- ");
	scanf("%d",&num);
	printf("\nsum of digits in %d is %d",num,digit_sum(num));
	return 0;
}
