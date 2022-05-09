#include <stdio.h>
#include <stdlib.h>

int valuePairSum(int *array, int *H, int n)
{
    int i=0, k=10;
    
    for(i=0; i < n; i++)
    {
        if(H[k - array[i]] != 0 )
        {
            printf("%d + %d = %d\n", array[i], k-array[i], k);
        }
        H[array[i]]++;
    }
}
int main(void) {
    int array[10]={6,3,8,10,16,7,5,2,9,14};
    int *H;
    H=(int *)malloc(16*sizeof(int));

    valuePairSum(array,H,10);
    
    return 0;
}