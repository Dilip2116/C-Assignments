//array concatenation:-----
#include<stdio.h>
#define ARRY_SIZE 5
void print_array(int arr[ARRY_SIZE])
{
	int i;
//	printf("\nGiven Array is :- ");
	for(i=0;i<ARRY_SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
}
void input_array(int arr[ARRY_SIZE])
{
	int i;
	for(i=0;i<ARRY_SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
}
/*void concet_array(int arr1,int arr2,int arr3)
{
	int i,k=0;
	
	for(i=0;i<ARRY_SIZE;i++)
	{
		arr3[k]=
	}
}*/
int main()
{
	int arr1[ARRY_SIZE],arr2[ARRY_SIZE];
	int i,k=0;
	printf("\nEnter first Array:--");
	input_array(arr1);
	
	printf("\nEnter second Array:--");
	input_array(arr2);
	
	printf("\n Array After Concatenation :- ");
	
	for(i=0;i<ARRY_SIZE;i++)
	{
		arr2[i+5]=arr1[i];
		
	}
	for(i=0;i<2*ARRY_SIZE;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	return 0;
	
}
