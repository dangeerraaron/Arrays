#include <stdio.h>
#include <stdlib.h>

struct Array
{
int *A;
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
int main(void)
{
struct Array arr;
int i=0, n=0;
printf("Enter Size of an Array: ");
scanf("%d", &arr.size);
arr.A=(int *)malloc(arr.size*sizeof(int));
arr.length=0; //array created in heap

printf("\nPlease enter how many elements to enter in array: \n");
scanf("%d", &n);
printf("Enter all the elements: \n");
for(i=0; i<n; i++)
{
scanf("%d",&arr.A[i]);
}
arr.length=n;
Display(arr);

return 0;
}
