#include<stdio.h>
int main()
{
int n,a[25],i,j;
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
    {
        if(-1<(a[i]+a[j])<=0)
        {
            printf("\n %d %d",a[i],a[j]);
        }
    }
}
return 0;
}
