//search and print location of element in an array-----
#include<stdio.h>
#define ARRY_SIZE 10
void print_arr(int arr[ARRY_SIZE] )
{
	int i=0;
	printf("Given Array is :- ");
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
void search_array(int arr[ARRY_SIZE],int n)
{
	int i,flag=0;
	for(i=0;i<ARRY_SIZE;i++)
	{
		if(arr[i]==n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%d  is present in Array  at location %d",n,i+1);
	else 
		printf("%d  is not  present in Array",n);
}
int main()
{
 int array[ARRY_SIZE],num;
 printf("enter %d numbers:- ",ARRY_SIZE);
 input_arr(array);
 print_arr(array);
 printf("\nEnter number which u want to search :-");
 scanf("%d",&num);
 search_array(array,num);
 return 0;
}
