// Given number is even or not-----
#include<stdio.h>
int main()
{
	int num1;
	printf("Enter a number:--");
	scanf("%d",&num1);
	if(num1%2==0)
	{
		printf("\nGiven number is EVEN::");
	}
	else
	{
		printf("\nGiven number is ODD::");
	}
	return 0;
}
