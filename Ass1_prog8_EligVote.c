//program to find wether person is eligible for vote or note:----
#include<stdio.h>
int main()
{
	int age;
	printf("enter the age of person: ");
	scanf("%age",&age);
	if(age<18)
		{
			printf("Person is Invalid for vote");
		}
	else
		{
			printf("Person is Valid");
		}
	return 0;
}
