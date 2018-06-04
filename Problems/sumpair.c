#include<stdio.h>
int main()
{
    int a[20],n,i,z,j,count=0;
    printf("\nEnter the number of array elements:");
    scanf("\n%d",&n);
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    
    printf("\nEnter the number to find its sum pair:");
    scanf("\n%d",&z);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==z)
            count++;
        }
    }
    if(count>0)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
    return 0;
}
