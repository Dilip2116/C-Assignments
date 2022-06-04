#include<stdio.h>
#define ARRY_SIZE 5
void print_array(int *q)
{
	int i;
	for(i=0;i<ARRY_SIZE;i++)
	{
		printf("%d ",*(q+i));  // q[i]
	}
	printf("\n");
}
void input_array(int arr[])
{
	int i;
	for(i=0;i<ARRY_SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}	
}
int sum(int arr[])
{
	int i,sum=0;
	for(i=0;i<ARRY_SIZE;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int array[ARRY_SIZE];
	int *ptr;
	ptr=array;
	
//	printf("\nsize of array:-%d",sizeof(array));
//	printf("\nsize ptr :-%d",sizeof(ptr));
	printf("\nEnter %d numbers :-",ARRY_SIZE);
	input_array(array);
	printf("\nGiven array is :-");
	print_array(array);
	printf("\nSum of elements of an array is %d",sum(array));
	return 0;
	
	
}
