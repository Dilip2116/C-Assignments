//program to calulate Simple interest:----
#include<stdio.h>
int main()
{
	int p_amt,rate,time,SI;
	printf("Enter the value of principal amount ,rate and time :- ");
	scanf("%d%d%d",&p,&r,&t);
	SI=(p_amt*rate*time)/100;
	printf("Simple interest=%d",SI);
	return 0;
	
}
