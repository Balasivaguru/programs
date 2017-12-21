#include<stdio.h>
int main(void)
{
char t[5];
int diff,j=0,i,m[4],k=0,c,l,x;
m[0]=0;
while(j<2)
{
scanf("%s",&t);
l=strlen(t);
c=0;
for(i=l-1;i>=0;i--)
{
	if(t[i]!=':')
	{
		x=t[i]
		m[k]+=(x-48)*pow(10,c);
		c++;
	}
	else
	{
		c=0;
		k++;
		m[k]=0;
	}	
}
k++;
m[k]=0;
j++;
}
if(m[1]>m[3])
m[3]+=12;
if(m[0]>m[2])
{
m[2]+=60;
m[3]--;
}
diff=(m[3]-m[1])*60 +(m[2]-m[0]);
printf("\n%d:%d",(diff/60),(diff%60));
return 0;
}
    
