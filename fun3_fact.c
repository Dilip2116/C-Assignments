// function to find factorial of a number ------
#include<stdio.h>
void find_fact(int n)
{
 	int i;
 	int fact=1;
 	for(i=1;i<=n;i++)
 	{
 		fact=fact*i;
 	}
 	printf("\n Factorial of %d is %d",n,fact);	
}
int main()
{
	int num;
	printf("\n Enter a number:- ");
	scanf("%d",&num);
	find_fact(num);
	
	return 0;
}
