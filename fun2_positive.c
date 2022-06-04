//creating fincton to check number is even or odd-----
#include<stdio.h>
void check_positive(int); // declaration of check_positive
int main()
{
	int num;
	printf("Enter a number:- ");
	scanf("%d",&num);
	check_positive(num);
	return 0;
}
void check_positive(int n)
{
	if(n>0) 
	{
		printf("\n %d IS A POSITIVE NUMBER",n);
	}
	else    
	{
		printf("\n %d IS A NEGATIVE NUMBER",n);
	}
}

