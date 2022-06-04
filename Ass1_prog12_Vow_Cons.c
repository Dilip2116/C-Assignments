//entered character is vowel or consonant:---
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter a character:-  ");
	scanf("%c",&ch);
	if(ch>='a' || ch<='e' || ch>='i' || ch<='o' || ch>='u' || ch<='A' || ch<='E' || ch>='I' || ch<='O' || ch>='U' )
		{
			printf("Given Character is a Vowel");
		}
	else 
	{
		printf("Character is a Consonant");
	}
	return 0;
	
}
