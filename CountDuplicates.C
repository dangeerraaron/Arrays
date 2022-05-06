#include <stdio.h>
#include <stdlib.h>

int CountDuplicates(int *arr1, int n)
{
    int i=0, j=0;
    for(i=0; i<n-1; i++) // do not exceed last elemeent
    {
        if(arr1[i]==arr1[i+1])
        {
            j=i+1; //set j counter 
            while(arr1[j]==arr1[i]) j++; // increment j if element to right is duplicate
            printf("%d is appearing %d times.\n", arr1[i], j-i);
            i=j-1; //increment i
        }
    }
}
int main(void) {
    int arr1[10]={3,6,8,8,10,12,15,15,15,20};
    CountDuplicates(arr1,10);
    
    return 0;
}