//check wether entered character is alphabet or digit:----
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter a character:-  ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' )
		{
			printf("Character is a Alphabet");
		}
	else if (ch>='0' && ch<='9')
	{
		printf("Character is a Digit");
	}
	return 0;
	
}0
