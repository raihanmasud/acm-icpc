#include<stdio.h>
#include<math.h>
#include<stdlib.h>



void main()
{
	int i,j,k,index,carry;
double x,p,q;
 double sum;
char s_sum[30],p_sum[30],r_sum[30];
while(scanf("%lf",&x)!=EOF)
{
i=0;
	/*if(x%2==0)
	{
		p=x/2;
		q=x+1;	
	}
	
	else
	{
	p=(x+1)/2;
	q=x;

	}*/
	
sum=(x*(x+1))/2;
///2;
	printf("%lf",sum);
	while(sum>1)
	{
	s_sum[i]=fmod(sum,10.0)+48;
	sum/=10;
	i++;
	
	}
//s_sum[i]='\0';
index=i-1;
	k=0;
for(j=index;j>=0;j--)
{
p_sum[k]=s_sum[j];
printf("%c",p_sum[k]);
k++;
}
carry=0;
for(i=0;i<index;i++)
{
multiply=atoi(p_sum[i])*atoi(p_sum[0]);
r_sum[i]=char((multiply%10)+carry);
carry=multiply/10;

}



}






 printf("\n");

}


	
	
	
	
}






