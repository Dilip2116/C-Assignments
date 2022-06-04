//Menu driven program for simple arithmetic operations :----
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,choice,result,fav;
	do
	{
	printf("\nEnter 1 for ADD");
	printf("\n Enter 2 for SUBTRACTION");
	printf("\n Enter 3 for MULTIPLICATION");
	printf("\n Enter 4 for DIVIDE");
	printf("\n Enter 5 for MODULUS");
	printf("\n Enter 6 to exit\n");
	printf("-------------------------------------------");
	
	printf("\nEnter Your choice:- ");
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("\nEnter two numbers :- ");
			   scanf("%d%d",&a,&b);
			   result =a+b;
			   printf("Addition of two number is %d :- ",result);
			   break;
		case 2:printf("\nEnter two numbers :- ");
			   scanf("%d%d",&a,&b);
			   result =a-b;
			   printf("\nSubtraction of two number is %d :- ",result);
			   break;
		case 3:printf("\nEnter two numbers :- ");
			   scanf("%d%d",&a,&b);
			   result =a*b;
			   printf("\nMultiplication of two number is %d :- ",result);
			   break;
		case 4:printf("\nEnter two numbers :- ");
			   scanf("%d%d",&a,&b);
			   result =a/b;
			   printf("\nDivision of two number is %d :- ",result);
			   break;
		case 5:printf("\nEnter two numbers :- ");
			   scanf("%d%d",&a,&b);
			   result =a%b;
			   printf("\nModulus of two number is %d :- ",result);
			   break;
		default: printf("\nInvalid Choice");
		case 6: exit(0);
	}
}while(choice!=6);
return 0;
}
