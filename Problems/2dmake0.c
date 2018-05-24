#include<stdio.h>
int main()
{
    int a[20][20],n,m,i,j,x,y;
    printf("\nEnter the number of array rows:");
    scanf("\n%d",&n);
    printf("\nEnter the number of array columns:");
    scanf("\n%d",&m);
    printf("\n");
    
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++)
    {
    printf("\n");
    for(j=0;j<m;j++)
    printf("%d ",a[i][j]);
    }
    
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    if(a[i][j]==0)
           {
               x=i;
               y=j;
               for(i=0;i<n;i++)
                {
                for(j=0;j<m;j++)
                {
                    if(i==x || j==y)
                    {
                        a[i][j]=0;
                    }
                }
                }
           }
    }
    
      for(i=0;i<n;i++)
    {
    printf("\n");
    for(j=0;j<m;j++)
    printf("%d ",a[i][j]);
    }
    return 0;
}
