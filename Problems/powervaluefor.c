#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
int n,p,i,value=1;
printf("Enter the value");
scanf("%d %d",&n,&p);
for(i=0;i<p;i++)
{
    value=value*n;
}
printf("Power value %d",value);
return 0;
}
