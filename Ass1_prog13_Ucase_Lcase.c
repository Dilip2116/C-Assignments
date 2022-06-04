//converting uppercase char into lowercase and vice versa;----
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter a character:-  ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' )
		{
			ch=ch+32;
		}
	else 
	{
		ch=ch-32;
	}
	printf("Converted Case of character =%c" ,ch);
	return 0;
	
}
