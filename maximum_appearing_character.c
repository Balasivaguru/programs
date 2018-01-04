#include<stdio.h>
int main(void)
{
char a[20],b[20];
int c[20],i,j,k,l,max,n,pos=0;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
c[i]=1;
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
{
c[i]++;
for(k=j;k<l-1;k++)
a[k]=a[k+1];
a[k]='\0';
l--;
j--;
}
}
if(i==0)
max=c[0];
if(max<c[i])
{
pos=i;
max=c[i];
}
}
for(i=0;i<l;i++)
if(c[i]==c[pos])
printf(" %c : %d\n",a[i],c[i]);
return 0;
}
