#include<stdio.h>
int main()
{
int n,a[25],i,j,t,count=0;
printf("\nEnter the how much numbers:");
scanf("\n%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]); 
}
for(i=0;i<n;i++)
{
    if((a[i]%2)==(i%2))
    {
        printf("\n%d",a[i]);
    }
    else if((a[i]%2)!=(i%2))
    {
        printf("\n%d",a[i]);
    }
    else
    {
        printf("\nNo required number");
    }
}
return 0;
}
