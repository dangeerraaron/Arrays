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

void AppendArr(struct Array *arr, int x)
{
	if(arr->length < arr->size)
	{
		arr->A[arr->length++]=x;
	}
}
void InsertArr(struct Array *arr, int index, int x)
{
	int i=0;
	if(index>=0 && index<=arr->length)
	{
	    for(i=arr->length; i>index; i--)
      {
      	arr->A[i]=arr->A[i-1];
        
	    }
	     arr->A[index]=x; 
      	     arr->length++; 
	}
}
int Delete(struct Array *arr, int index)
{
    int x=0;
    int i=0;
    
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index]; //element to be deleted
        for(i=index; i<arr->length-1; i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main(void)
{
	struct Array arr={{2,3,4,5,6},10,5}; 
	/*InsertArr(&arr,3,10);*/
    printf("%d\n",Delete(&arr, 0));
	Display(arr);
	
	return 0;
}