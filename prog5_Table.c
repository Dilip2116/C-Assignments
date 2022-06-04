//program to print table of a number;---
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	printf("\n Table of %d  is:- ",n);
	while(i<=10)
	{
		printf("\n %d * %d = %d",n,i,n*i);
		i++;
		
	}	

	return 0;
}
