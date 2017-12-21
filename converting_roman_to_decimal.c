#include<stdio.h>
int main(void)
{
char a[10];
int ans,i,b[10];
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='i'||a[i]=='I')
b[i]=1;
if(a[i]=='v'||a[i]=='V')
b[i]=5;
if(a[i]=='x'||a[i]=='X')
b[i]=10;
}
ans=b[0];
for(i=1;b[i]!='\0';i++)
{
	if(ans>=b[i])
	ans+=b[i];
	else
	ans=b[i]-ans;
}
printf("\n%d",ans);
return 0;
}
    
