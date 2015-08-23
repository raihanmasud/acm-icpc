#include<stdio.h>

void main()
{

int i,n,m;
long fib[55];
fib[0]=0;
fib[1]=2;
fib[2]=3;
for(i=3;i<=51;i++)
 fib[i]=fib[i-2]+fib[i-1];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&m);
 printf("Scenario#%d:\n%ld",i,fib[m]);
 printf("\n");
 if(i<n)
	 printf("\n");
}


}