//checking year is leap or not:---- 
//changed by sanchet
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year:- ");
	scanf("%d",&year);
	if(((year%4==0) && (year%100!=0)) || (year%400==0))
	{
		printf("given year is a leap year");
	}
	else 
	{
		printf("given year is not a leap year");
	}
	return 0;
}
