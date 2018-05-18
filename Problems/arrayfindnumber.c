#include<stdio.h>
int main()
{
int a[20],n,i,k,count=0;
printf("\n Enter the number of array elements:");
scanf("\n %d",&n);
printf("\n Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("\t %d",&a[i]);
}
printf("\n Enter number of elements to find:");
scanf("\n %d",&k);
for(i=0;i<n;i++)
{
if((a[i]==k)&&(count==0))
{
printf("\n Found number %d",k);
count++;
}
}
return 0;
}
