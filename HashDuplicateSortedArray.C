#include <stdio.h>
#include <stdlib.h>
//sorted array using hashing to find duplicates
int hashDuplicate(int *arr, int *H, int n)
{
    int i=0, high=arr[n-1];
    for(i=0; i<n; i++)
    {
        H[arr[i]]++;
    }
    for(i=0; i<=high; i++)
    {
        if(H[i] > 1)
        {
            printf("%d appears %d times.\n", i, H[i]);
        }
    }
}
int main() {
    int arr[10]={3,6,8,8,10,12,15,15,15,20};
    int *H;
    H=(int*)malloc(20*sizeof(int));
    
    hashDuplicate(arr, H, 10);
    return 0;
}