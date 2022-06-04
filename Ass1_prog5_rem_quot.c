//program to find remainder and quotient :---
#include<stdio.h>
int main()
{
	int div ,divisor,q,r;
	printf("Enter dividend and divisor:- ");
	scanf("%d%d",&div,&divisor);
	r=div%divisor;
	q=div/divisor;
	printf("remainder =%d\nquotient =%d",r,q);
	return 0;
	
}
