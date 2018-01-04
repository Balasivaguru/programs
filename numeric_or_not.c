#include<stdio.h>
int main(void)
{
char a[20],i,n=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>47 && a[i]<58)
n++;
}
(n==i)?printf("TRUE"):printf("FALSE");
return 0;
}
