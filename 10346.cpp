#include<stdio.h>
#include<math.h>

void main()
{
long n,k,r;
long total,c,d;

while(scanf("%ld",&n)!=EOF)

{ 
	total=0;
	c=0;
   scanf(" %ld",&k);
   c=n/k;
   r=n%k;
   total=n+c;
   c=c+r;
     while(c>=k)
	 {
       d=c/k;
	   r=c%k;
	   total=total+d;
	   c=d+r;
	 }
printf("%ld",total);
printf("\n");
} 


}
