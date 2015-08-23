#include<stdio.h>
#include<math.h>

double min(double a,double b)
{
   if(a<b)
	   return a;
   else
	   return b;

}

double max(double a,double b)
{
   if(a>b)
	   return a;
   else
	   return b;

}

void main()
{
 
long n,t=0,count=0;
double xx,yy,rr,f1,f2,dist,rt;
double x[101],y[101],r[101];
int i,j;

scanf("%ld",&n);
 while(n!=-1)
{

	count=0;
    for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&xx,&yy,&rr);
		x[i]=xx;
		y[i]=yy;
		r[i]=rr;
	}
    j=1;
   for(j=1;j<n;j++)
    for(i=j+1;i<=n;i++)
	{
		f1=pow(x[j]-x[i],2);
		f2=pow(y[j]-y[i],2);

	    dist=sqrt(f1+f2);
        rt=r[j]+r[i];
		if(dist>r[j]+r[i]||dist==r[j]+r[i]||dist+min(r[j],r[i])<max(r[j],r[i]))
			t=0;
    	else 
		count++;
	    
	}
        printf("%ld",count);
		scanf("%ld",&n);
		
}


}
