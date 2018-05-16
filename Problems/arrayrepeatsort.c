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
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
    }
}
for(i=0;i<n;i++)
{
   if(a[i]==a[i+1])
   {
       count++;
   }
   if(count>0)
   {
       printf("\n%d",a[i]);
   }
   count=0;
}
return 0;
}
