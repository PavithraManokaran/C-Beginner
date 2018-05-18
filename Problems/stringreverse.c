#include<stdio.h>
#include<string.h>
int main(void)
{
char a[30];
int i,l,count;
printf("\nEnter the string or sentence:");
scanf("\n%s",a);
l=strlen(a);
for(i=l-1;i>=0;i--)
{
    if(a[i]!=' ')
    {
    printf("%c ",a[i]);
    count=count+1;
    }
}
for(i=count+1;i<l;i++)
{
    printf("%c ",a[i]);
}
return 0;
}
