#include <stdio.h>
#include <stdlib.h>

int findDuplicates(int *arr1, int n)
{
    int i=0, lastDuplicate=0;
    for(i=0; i<n; i++)
    {
        if(arr1[i]==arr1[i+1] && arr1[i]!= lastDuplicate)
        {
            printf("Duplicates are: %d\n", arr1[i]);
            lastDuplicate=arr1[i];
        }
    }
}
int main(void) {
    int arr1[10]={3,6,8,8,10,12,15,15,15,20};
    findDuplicates(arr1,10);
    
    return 0;
}