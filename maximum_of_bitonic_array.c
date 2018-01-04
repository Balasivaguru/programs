#include <stdio.h>
int main(void)
{
int a[10],n,i,max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(i==0)
max=a[i];
if(max<=a[i])
max=a[i];
else
break;
}
printf("%d",max);
return 0;
}
