// coopy array element ot other array:----
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
void copy_arr(int arr[],int brr[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		brr[i]=arr[i];
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
	printf("\nCopied array is:-");
	copy_arr(array,carray,size);
	print_arr(carray,size);
	return 0;
}
