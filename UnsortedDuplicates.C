#include <stdio.h>
int unsortedDuplicate(int *a, int n)
{
    int i=0, j=0,count=0;
    for(i=0;i<n-1;i++)
    {
        count=1;
        if(a[i]!= -1)
        {
         for(j=i+1;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 count++;
                 a[j]=-1;
             }
         }
        
         if(count > 1)
         {
             printf("%d appears %d times\n", a[i], count);
         }
        }
     }
 }
int main(void) {
    int a[10]={8,3,6,4,6,5,6,8,2,7};
    unsortedDuplicate(a,10);
    
    return 0;
}
