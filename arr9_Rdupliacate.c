//remove duplicate elemenst from array----
#include<stdio.h>
//define size 10
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
void rem_duplicate(int arr[],int s)
{
	int i, j,k;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<s;k++)
				{
					arr[k]=arr[k+1];
				}
				j--;
				s--;
			}
		
		}
	}
	
}
int main()
{
	int size=10,array[size];
	printf("\nEnter %d numbers:-",size);
	input_arr(array,size);
	printf("\nGiven array is:-");
	print_arr(array,size);
	rem_duplicate(array,size);
	print_arr(array,size);
	return 0;
}
