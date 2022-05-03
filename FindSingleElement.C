#include <stdio.h>
#include <stdlib.h>
// finding single element in sorted array, corrected
//syntax and logic errors in previous code
int singleElement(int *arr, int n)
{
	int i=0, sum=0, diff=0,j=arr[n-1], missing=0;
	for(i=0; i < n; i++)
	{
			sum = sum + arr[i];
	}
	
	diff = j * (j + 1)/2;
	missing = diff - sum;
	
	printf("The missing element is %d. ", missing);
}
int main (void)
{
	int arr[11] = {1,2,3,4,5,6,7,9,10,11,12};
	singleElement(arr, 11);
	return 0;
}
