#include<stdio.h>
#include<math.h>


long isprime(long x)
{
 long i;
 long c;
 c=x;
 while(c%2==0)
 {
   printf("2\n");
   c=c/2;
 }
 i=3;
 while(i<=sqrt(c)+1)
 {
  if(c%i==0)
  {
      printf("%ld\n",i);
	c=c/i;
  }
  else
	  i=i+2;
 
 }
 if(c>1)
	 printf("%ld\n",c);
  return c;
}




void main()
{
 long x,c;

 while(scanf("%ld",&x)!=EOF)
 {
  c=isprime(x);
 
 }

}