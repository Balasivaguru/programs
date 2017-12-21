#include<stdio.h>
int main(void)
{
char a[10];
int temp,l,i;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<(l/2)*2;i+=2)
{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}

printf("\n%s",a);
return 0;
}
    
