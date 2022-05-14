#include <stdio.h>
#include <stdlib.h>
//finding a pair in sorted array that equals 10
int PairEqualSum(int *array, int n)
{
   int i=0, j=n-1, k=10;
    while(i < j)
    {
        if(array[i] + array[j] == k)
        {
            printf("%d + %d = %d\n", array[i], array[j],k);
            i++;
            j--;
        }else if(array[i] + array[j] < k)
           {
                i++;
           }else
             {
                 j--;
             }
    }
}
int main(void) {
    int array[10]={1,3,4,5,6,8,9,10,12,14};
    PairEqualSum(array,10);
    
    return 0;
}