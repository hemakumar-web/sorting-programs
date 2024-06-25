//code for finding an element in a list using linear searching algorithm

#include<stdio.h>
int main()
{
	int arr[]={23,56,67,78};
	int result=8,i;
	for(i=0;i<sizeof(arr);i++)
		{
		if(arr[i]==result)
		{
		printf("the result is found");
        }

		else
		{
		printf("result is not found");
		}}

	return 0;
}