#include <stdio.h>
int main()
{
   int a[20][20],i,j,n,m;
   scanf("%d",&n);
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(a[i][j]==a[i+1][j])
           {
               printf("%d",a[i][j]);
           }
       }
   }
}
