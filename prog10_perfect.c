//program to check given number is perfect or not -----
#include<stdio.h>
int main()
{
	int n,i,sum=0,t;
	printf("Enter a number\n");
	scanf("%d",&n);
	t=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==t)
		printf("Given number is a perfect number\n");
	else
		printf("Given number is not a perfect number\n");
	return 0;
}
