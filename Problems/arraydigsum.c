#include<stdio.h>
int main()
{
    int a[20][20],n,m,i,j,s=0;
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
        {
            if(i==j)
            s=s+a[i][j];
        }
    }
    printf("\nProduct=%d",s);
    return 0;
}
