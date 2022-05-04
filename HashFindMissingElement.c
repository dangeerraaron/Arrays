#include <stdio.h>
#include <stdlib.h>
int HashSearch(int *arr1, int *arr2, int n)
{
    int i=0, low = 1, high=12;
    for(i=0; i < n; i++)
    {
        arr2[arr1[i]]++;
    }
    for(i=low; i <= high; i++)
    {
        if(arr2[i]==0)
        {
            printf("Missing elements: %d \n", i);
        }
    }

}
int main() {
    int arr1[10]={3,7,4,9,12,6,1,11,2,10};
    int *arr2;
    arr2=(int *)malloc(12 * sizeof(int));
    HashSearch(arr1,arr2, 10);
    
    return 0;
}