//add two array in third array-----
#include<stdio.h>
void print_arr(int arr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
void input_arr(int arr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void add_arr(int arr1[],int arr2[],int brr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		brr[i]=arr1[i]+arr2[i];
	//	printf("array1[%d] + array2[%d] = %d",i,i,brr[i]);
		
	}
}
int main()
{
	int size=10;
	int array1[size],array2[size];
	int carray[size];
	printf("\nEnter %d numbers for first array:-",size);
	input_arr(array1,size);
	printf("\nEnter %d numbers for second array:-",size);
	input_arr(array2,size);
	printf("\nFirst array is:-");
	print_arr(array1,size);
	printf("\nSecond array is:-");
	print_arr(array2,size);
	add_arr(array1,array2,carray,size);
	printf("\nthird array after addition of two array:--");
	print_arr(carray,size);
	
}
