// cube of a number using inbuilt function----
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,cube;
	printf("Enter a number:-");
	scanf("%d",&num1);
	cube=pow(num1,3);
	printf("Cube:- %d",cube);
	return 0;
}
