#include<stdio.h>
#include<math.h>

double x[10002],y[10002];

void min_dist(long n)
{
 long  i,j;
 double xx,yy;
 double min,dis;
 long k;
 k=1;
 for(i=k;i<n;i++)
 {
	 for(j=k+1;j<n;j++)
   
   {
	   
	   xx=fabs(x[j]-x[j+1]);
	   yy=fabs(y[j]-y[j+1]);
	   dis=xx*xx+yy*yy;
	   dis=sqrt(dis);
	   if(i==1)
	   {
	     min=xx*xx+yy*yy;
	     min=sqrt(min);
	   }
	   if(i>1)
	   {
	    if(dis<min)
			min=dis;
	   }

	}

 }
 if(min<10000)
   printf("%.4lf",min);
 else
	 printf("INFINITY");
}

void main()
{
 
 long i,n;
 scanf("%ld",&n);

 while(n!=0)
 {
   for(i=1;i<=n;i++)
   {
	   scanf("%lf",&x[i]);
	   scanf("%lf",&y[i]);
   }

   min_dist(n);
   printf("\n");  
	scanf("%ld",&n);
 
 }

}