#include<stdio.h>
int main()
{
int n,m,a[25],b[25],i,j,count=0;
printf("\nEnter the how much numbers in A:");
scanf("\n%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]); 
}
printf("\nEnter the how much numbersin B:");
scanf("\n%d",&m);
printf("\nEnter the numbers:");
for(i=0;i<m;i++)
{
   scanf("%d",&b[i]); 
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    if(b[i]==a[j])
    {
     count=count+1;   
    }
    }
}
if(count<n)
{
    printf("Yes");
}
else
{
    printf("No");
}
return 0;
}
