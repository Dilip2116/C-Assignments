//program to check given number is prime or not
#include<stdio.h>
int main()
{
	int n,i,flag=0,num,j;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		flag=0;
	 	num=i;
		for(j=2;j<num;j++)
		{
			if(num%j==0)
			{
				flag=1;
				break;
			}			
		}
		if(flag==0)
		{
			printf("\n %d is a PRIME",num);
		}	
	}

    return 0;
}
