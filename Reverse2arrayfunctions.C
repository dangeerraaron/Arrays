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
void Swap(int *x, int *y)
{
	int temp=0;
	
	temp=*x; //assign address x to temp
	*x=*y;//assign address y to address x
	*y=temp;// assign temp variable to address y
	
}
int Get(struct Array arr, int index) //pass by value
{
	int i=0;
	if(index >= 0 && index < arr.length) //check if index valid
	{
		return arr.A[index]; //index parameter
	}
	return -1; //otherwise if not found, return -1
}
void Set(struct Array *arr, int index, int x) //since changing values, pass arr by address to modify
{
	if(index >= 0 && index < arr->length)
	{
		arr->A[index]=x; //selects index and inserts new number 'x'
		//no return needed since void
	}
}
int Max(struct Array arr) //only need to pass array by value
{
	int max= arr.A[0], i=0;
	for(i=1; i<arr.length; i++)
	{
		if(arr.A[i] > max)
		{
		    max=arr.A[i];
		}
	}
	return max;
}   
int Min(struct Array arr)
{
	int min = arr.A[0], i=0;
	for(i=1; i < arr.length; i++)
	{
		if(arr.A[i] < min)
		{
			min=arr.A[i];
		}
	}	
	return min;
}
int Sum(struct Array arr) //pass by value
{
	int i=0, sum=0;
	for(i=0; i < arr.length; i++)
	{
		sum = sum + arr.A[i];
	}
	return sum;
}
float Average(struct Array arr)
{
	return (float)Sum(arr)/arr.length; //typecast as float call sum function and divide by array length
}
void Reverse_1(struct Array *arr) //pass by reference as the array contents are being swapped
{
	int *B; //create pointer/Heap array for copying
	int i=0,j=0;
	
	B=(int *)malloc(arr->length*sizeof(int)); //allocating memory for array to copy
	
	for(i=arr->length-1, j=0; i >= 0; i--, j++)
	{
		B[j]=arr->A[i];  //reverse copy array A into array B
	}
	
	for(i=0; i < arr->length; i++) // iterate and copy array B into array A
	{
		arr->A[i]=B[i];
	}
}
void Reverse_2(struct Array *arr)
{
	int i=0, j=0;
	for(i=0, j=arr->length-1; i < j; i++, j--)
    {
		Swap(&arr->A[i], &arr->A[j]);
    }		
}
int main(void)
{
	struct Array arr={{2,3,4,5,6},10,5}; 
   // printf("%.2f \n", Average(arr));
    /*Set(&arr,4,18);*/  //when using Set function, since it is void funciton and modifying address, pass &arr
	/*Reverse_1(&arr); */
	Reverse_2(&arr);
	Display(arr); 
	
	return 0;
}