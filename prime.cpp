#include<stdio.h>
#include<math.h>


int isprime(long p)
{
  int isprime=1,i;
  if(p%2==0)
	  isprime=0;
  else
  {
    for(i=3;i<=sqrt(p)+1;i=i+2)
	{
	 if(p%i==0)
        isprime=0; 
	}
  }
 return isprime;
}

void main()
{

long p,i;
long pos;
long prime[100005];
long tprime[100005];
scanf("%ld",&p);
scanf("%ld",&pos);
tprime[1]=prime[1]=3;
tprime[2]=prime[2]=5;
tprime[3]=prime[3]=7;

long k=3,j=4;
	for(i=11;i<=p;i=i+2)
	{
      if((i%3)!=0||(i%5!=0)||(i%7)!=0)
	  if(isprime(i)==1)
	  {
	   prime[j]=i;
	     if((prime[j]-prime[j-1])==2)
		 {
		   tprime[k]=prime[j-1];
		   tprime[k+1]=prime[j];
		   k++;
		 }

	   j++;

	  }
	}


printf("%ld %ld",tprime[pos],tprime[pos+1]);

/*	for(i=1;i<j;i++)
	{
      if() 
	}*/
 //printf("%ld ",prime[i]);
//printf("\n\n%ld",j);
}