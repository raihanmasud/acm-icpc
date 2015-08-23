#include<stdio.h>

void main()
{

int a[10000],b[10000],c[10005];
int i,j,k;
int m,n;
int rs,carry=0,d=0;
scanf("%d",&m);
printf("\n");
for(i=1;i<=m;i++)

{
  scanf("%d",&n);
   for(j=1;j<=n;j++)
   scanf("%d %d",&a[j],&b[j]);

   for(j=n;j>=1;j--)
   {  
	  rs=a[j]+b[j]+d;
      carry=rs%10;
	  d=rs/10;
	  c[j]=carry;
   }

   for(j=1;j<=n;j++)
   
	   printf("%d",c[j]);
   printf("\n\n");
}
}