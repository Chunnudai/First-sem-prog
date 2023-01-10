#include <stdio.h>
int main()
{
    int n,target;
    scanf("%d",&n);
    scanf("%d",&target);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d",i,j);
         
            }
        }
        
    }
 
}