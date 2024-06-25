//code for finding an element in a list using Binary search algorithm

#include<stdio.h>
int main()
{
	int arr[]={34,45,78,78,90,100};
	int mid,low=0,high,x;
	while(low<=high)
		{
			mid=low+(high-low)/2;
		if(arr[mid]==x)
		{
		printf("the result is found");
		else if(arr[mid]<x)
		{
			low=mid+1;
		
		}
		else{
			high=mid-1;
		}}
		}
	return 0;
}