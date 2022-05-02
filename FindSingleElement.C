#include <stdio.h>
#include <stdlib.h>

int singleElement(int *arr, int n)
{
	int i=0, sum=0, diff=0, missing=0;
	for(i=0;, i < n; i++)
	{
			sum = sum + arr[i];
	}
	
	diff = n *(n + 1)/2;
	missing = diff - sum;
	
	printf("The missing element is %d. ", missing);
}
int main (void)
{
	int arr[11] = {1,2,3,4,5,6,8,9,10,11,12};
	singleElement(arr, 11);
	return 0;
}