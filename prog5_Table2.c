#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	printf("\n Table of %d  is:- ",n);
	do
	{
		printf("\n %d *%d =%d ",n,i,n*i);
		i++;
		
	}while(i<=10);

	return 0;
}
