#include<stdio.h>
int main()
{
    int a[20],n,i,p=1;
    printf("\nEnter the number of elements:");
    scanf("\n%d",&n);
     printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
      for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    
    while(n!=0)
    {
        for(i=0;i<n;i++)
        {
        p=p*a[i];
        }
        printf("\nProduct= %d",p);
        p=1;
        n--;
        i++;
    }
    return 0;
}
