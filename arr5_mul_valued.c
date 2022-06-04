#include<stdio.h>
void print_arr(int arr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void input_arr(int arr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void mul_arr(int arr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		arr[i]=5*arr[i];
	}
}
int main()
{
	int size=10;
	int array[size];
	int carray[size];
	printf("\nEnter %d numbers:-",size);
	input_arr(array,size);
	printf("\nGiven array is:-");
	print_arr(array,size);
	printf("\nMultiplied Value of array is:-");
	mul_arr(array,size);
	print_arr(array,size);
	return 0;
}
