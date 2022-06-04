// function to display square of a number
#include<stdio.h>
void find_square(int);   //declaration of function---

int main()
{
	int num;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	find_square(num); // calling of function ----
	return 0;
}

void find_square(int n)  //defintion of function ---
{
	int square;
	square=n*n*n;
	printf("Square of % d is %d ",n,square);
}
