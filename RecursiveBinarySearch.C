#include <stdio.h>
#include <stdlib.h>

struct Array
{
	int A[20]; //static size of 20
	int size;
	int length;	
};
void Display(struct Array arr)
{
	int i=0;
	printf("The elements are: ");
	for(i=0; i < arr.length; i++)
	{
		printf("%d ", arr.A[i]);
	}
}

int BinarySearch(struct Array arr, int key)
{
	int low=0, mid=0, high= arr.length-1;
	
	while(low <= high)  // when low exceeds high, loop terminates
	{
		mid = (low + high) /2;
		
		if(key == arr.A[mid])
		{
			return mid;
		}else if(key < arr.A[mid])
		{
			high = mid - 1;
		}else
		{
			low = mid + 1;
		}

		return -1;
	}
}	
int main(void)
{
	struct Array arr={{2,3,4,5,6},10,5}; 

    printf("The element is located at array index %d.\n", BinarySearch(arr, 4));
	Display(arr); 
	
	return 0;
}