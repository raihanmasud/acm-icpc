#include<stdio.h>
double average,percentage;;

long int C;
int grade[1002];
double count,N,sum;
int i;


void main()
	{
	scanf("%ld",&C);

while(C>0)
{

	scanf("%lf",&N);
	count=0;
    sum=0;
	for(i=0;i<N;i++)
		{
		scanf("%d",&grade[i]);
		sum+=grade[i];
		}

	average=(sum/N);

	for(i=0;i<N;i++)
	
	{
		if(grade[i]>average)
		{
	    count++;
       	}
	
	}

	percentage=(count/N)*100;
	printf("%.3lf%c",percentage,37);
	printf("\n");

	C--;
}

}

