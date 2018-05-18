#include<stdio.h>
int main()
{
int n,a[25],i,j,k;
printf("\nEnter the how much numbers:");
scanf("\n%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]); 
}
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        for(k=0;k<n;k++)
            if(a[i]==a[j]==a[k])
            {
            }
            else
            {
            printf("\n%d %d %d",a[i],a[j],a[j]);
            }
return 0;
}
