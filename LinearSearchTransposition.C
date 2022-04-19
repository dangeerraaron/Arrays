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

void SwapTrans(int *x, int *y)
{
	int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}	
int LinearSearchTrans(struct Array *arr, int key)  //pass arr by address
{
	int i=0; //index counter
	for(i=0; i < arr->length; i++) //search every element
	{
		if(key == arr->A[i])
		{
			 SwapTrans(&arr->A[i],&arr->A[i-1]);
		     return i;
		}//if key found, return index in array it is located
	}
	return -1; // if key/element not found, return -1
}

int main(void)
{
	struct Array arr={{2,3,4,5,6},10,5}; 
	/*InsertArr(&arr,3,10);*/
   /* printf("%d\n",Delete(&arr, 0)); */
    printf("%d\n", LinearSearchTrans(&arr, 5));
	Display(arr); 
	
	return 0;
}