#include<stdio.h>
int main(void)
{
int n,i=0,a[10];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
i=0;
while(i<n-1)
i+=a[i];
(a[i]==a[n-1])?printf("TRUE"):printf("FALSE");
return 0;
}
