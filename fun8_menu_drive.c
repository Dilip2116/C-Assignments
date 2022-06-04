//menue driven program for various arithmetic operation
#include<stdio.h>
#include<stdlib.h>
void add(int n1,int n2)
{
	int sum=0;
	sum=n1+n2;
	printf("\nSum of given numbers is :- %d\n",sum);
}
void substract(int n1,int n2)
{
	int sub=0;
	sub=n1-n2;
	printf("\nsubsraction of  of given numbers is:- %d\n",sub);
}
int mult(int n1,int n2)
{
	int mul=0;
	mul=n1*n2;
	return mul;
	
}
float  division(int n1,int n2)
{
	float div;
	div=(float)n1/n2;
	return div;
	
}
int main()
{
	int num1,num2,choice;
	
	do
	{
	printf("\nPress 1 for sum \nPress 2 for substract \nPress 3 for multiplication \nPress 4 for division \nPress 5 for exit\n");
	printf("\nEnter you choice :-- ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:	printf("\nEnter two number :-");
				scanf("%d%d",&num1,&num2);
				add(num1,num2);
			   	break;
		case 2: printf("\nEnter two number :-");
				scanf("%d%d",&num1,&num2);	
				substract(num1,num2);
		       	break;
		case 3:	printf("\nEnter two number :-");
				scanf("%d%d",&num1,&num2);
				printf("\nMultiplication of given numbers is:-%d\n",mult(num1,num2));
		       	break;
		case 4:	printf("\nEnter two number :-");
				scanf("%d%d",&num1,&num2);
				printf("\nDivision of given numbers is :- %.2f\n",division(num1,num2));
		       	break;
		default : printf("\nInvalid choice");
		case 5:exit(0);
	}
}
	while(choice!=5);
	return 0;
}

