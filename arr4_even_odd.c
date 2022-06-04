//even odd element:---
#include<stdio.h>
#define ARRY_SIZE 10
void print_arr(int arr[ARRY_SIZE] )
{
	int i=0;
//	printf("Given Array is :- ");
	for(i=0;i<ARRY_SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
}

void input_arr(int arr[ARRY_SIZE])
{
	int i=0;
	for(i=0;i<ARRY_SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void even_odd_arr(int arr[ARRY_SIZE])
{
	int i,arr1[ARRY_SIZE],arr2[ARRY_SIZE];
	int even=0,odd=0;
	for(i=0;i<ARRY_SIZE;i++)
	{
		if(arr[i]%2==0)
		{
			arr1[even]=arr[i];
			even++;
			
		}
			
		else
		{	
			arr2[odd]=arr[i];
			odd++;
		}
	}
	printf("\n No. of even element :- %d",even);
	printf("\n No. of odd element:-%d",odd);
	printf("\nEven Elements Array:- ");
	//print_arr(arr1);
	for(i=0;i<even;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nOdd Elements Array:- ");
	for(i=0;i<odd;i++)
	{
		printf("%d ",arr2[i]);
	}
	//print_arr(arr2);
}
int main()
{
 int array[ARRY_SIZE];
 
 printf("\nEnter %d numbers:-",ARRY_SIZE);
 input_arr(array);
 printf("\nGiven Array is :- ");
 print_arr(array );
 
 even_odd_arr(array);
 
 return 0;
}
