#include<stdio.h>
#include<math.h>

void main()
{
 int n,c=0;
 double hx[10005],hy[10005];
 double gx,gy,dx,dy;
 
 double dg,dd;
 int i;

 while(scanf("%d",&n)==1)
 {
   c=0;
   scanf("%lf%lf",&gx,&gy);
   scanf("%lf%lf",&dx,&dy);

   for(i=1;i<=n;i++)
    scanf("%lf%lf",&hx[i],&hy[i]);
   for(i=1;i<=n;i++)
   {
	   dg=pow((gx-hx[i]),2)+pow((gy-hy[i]),2); 
       dd= pow(dx-hx[i],2)+pow(dy-hy[i],2); 
       
       
	   
	   if(dd>4*dg)
	   {
	   printf("The gopher can escape through the hole at (%.3lf,%.3lf).",hx[i],hy[i]);
	   c=1;
	   break;
	   }
  
 
   } 
   if(c==0)
	
	   {
		   printf("The gopher cannot escape.");
		   
	   }
   printf("\n\n");
   

 }
  

}