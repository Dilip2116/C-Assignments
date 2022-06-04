//printing table from 2 to 10----
#include<stdio.h>
void table(int n)
{
	int j=1;
	while(j<=10)
	{
		printf("      %d * %d = %d\n",n,j,n*j);
		j++;
	}
}
int main()
{
	int i;
	for(i=2;i<=10;i++)
	{
		printf("\nTable of %d:-\n ",i);
		table(i);
	}
	return 0;
}
