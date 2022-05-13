#include <stdlib.h>
#include <stdio.h>
//nested for loop to find sum value of array two indicies

int indexPairSum(int *array, int n, int k)
{
   int i=0, j=0; 
   for(i=0; i < n-1; i++)
   {
       for(j=i+1; j<n; j++)
       {
           if(array[i] + array[j] == k)
           {
            
	     		printf("%d + %d = %d\n", array[i], array[j],k);

           }

       }

   }

}
int main(void) 
{
    int array[10]={6,3,8,10,16,7,5,2,9,14};
    int k=0;


    printf("enter number desired: ");
    scanf("%d", &k);

    indexPairSum(array,10, k);

    return 0;
}