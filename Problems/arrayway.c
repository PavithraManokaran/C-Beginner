#include<stdio.h>
int main()
{
int n,a[25],i,j,count=0;
char b[30];
printf("\nEnter the how much numbers:");
scanf("\n%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]); 
}
for(i=0;i<n;i++)
{
 printf("%c",a[i]+96);
 count=count+1;
}
printf("\n%d",count-1);
return 0;
}
