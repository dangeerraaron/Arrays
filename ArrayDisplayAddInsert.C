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
    if(arr->length < arr->size)//check to see if length does nkt exceed size of array firsy
    {
       arr->A[arr->length++]=x;// inserts element at end of array
    }
}
void InsertArr(struct Array *arr, int index, int x)
{
int i=0;
if(index>=0 && index<=arr->length)
{
    for(i=arr->length; i>index; i--)
      {
      arr->A[i]=arr->A[i-1]; //starts at current length and copies element to

    }
     arr->A[index]=x; // inserts element at desired index
      arr->length++; // increments lenght
}
}
int main(void)
{
struct Array arr={{2,3,4,5,6},10,5}; //size of 10 and length/ elements of 5 presently

/*AppendArr(&arr,10);*/ //call by address to insert 10
InsertArr(&arr,3,10);
Display(arr);

return 0;
}