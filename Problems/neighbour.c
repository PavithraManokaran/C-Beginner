#include<stdio.h>
int main()
{
int a[20],n,i,k,count;
printf("\n Enter the number of array elements:");
scanf("\n %d",&n);
printf("\n Enter the number to get its neighbours:");
scanf("\n %d",&k);
printf("\n Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("\t %d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        printf("\n %d %d",a[i-1],a[i+1]);
    }
}
return 0;
}
