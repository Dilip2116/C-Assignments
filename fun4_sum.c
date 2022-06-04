//creating functions to return various arithmetic operation ----
#include<stdio.h>
int add(int num1,int num2)
{
	return num1+num2;
}
int substract(int num1,int num2)
{
	return num1-num2;
}
int multiply(int num1,int num2)
{
	return num1*num2;
}
int divide(int num1,int num2)
{
	return num1/num2;
}
int main()
{
	int n1,n2;
	printf("Enter two number:- ");
	scanf("%d%d",&n1,&n2);
	printf("\n%d + %d = %d",n1,n2,add(n1,n2));
	printf("\n%d - %d = %d",n1,n2,substract(n1,n2));
	printf("\n%d * %d = %d",n1,n2,multiply(n1,n2));
	printf("\n%d / %d = %d",n1,n2,divide(n1,n2));
	return 0;
}
