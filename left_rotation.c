#include<stdio.h>
int main(void)
{
int a[10],temp;
int i,j,l=5,n=2;
for(i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++) 
{
printf("\n");
temp=a[0];
for(i=1;i<l;i++) 
{
a[i-1]=a[i];
}
a[i-1]=temp;
for(i=0;i<l;i++)
{
printf("%d\t",a[i]);
}
}
return 0;
}
