#include <stdio.h>
#include <stdlib.h>
//finding missing element in sorted array
int missingElement(int *arr, int n)
{
int i=0,diff=arr[i] - i;
	for(i=0; i < n; i++)
	{
		if(arr[i] - i != diff);
		{
			while(diff < arr[i] - i)
			{
			   printf("%d is missing. \n", diff+i);
			   diff++;
			}
		}
	}
}
int main(void)
{
	int arr[11]={6,7,8,9,11,12,15,16,17,18,19};
	missingElement(arr, 11);

	return 0;
}