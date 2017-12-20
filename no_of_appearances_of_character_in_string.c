#include<stdio.h>
int main(void)
{
char a[10];
int count,i,j,k;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
count=1;
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
count++;
for(k=j+1;a[k]!='\0';k++) 
{
a[k-1]=a[k];
}
a[k-1]='\0';
}
}
printf("%c - %d\n",a[i],count);
}
return 0;
}
