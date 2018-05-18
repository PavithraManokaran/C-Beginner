#include<stdio.h>
int main()
{
int a[20],n,i,sum;
printf("\n Enter the number of array elements:");
scanf("\n %d",&n);
printf("\n Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("\t %d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n Sum is %d",sum);
return 0;
}
