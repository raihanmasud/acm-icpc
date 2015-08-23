#include<stdio.h>
struct farmer
{
long int yard;
long int animal;
long int fndness;
}f[22];



double sum;
void main()
{
int testcase,farmerno;
scanf("%d",&testcase);

while(testcase>0)
{
sum=0;
	scanf("%d",&farmerno);

		while(farmerno>0)
		{
			scanf("%ld%ld%ld",&f[farmerno].yard,&f[farmerno].animal,&f[farmerno].fndness);


			sum+=f[farmerno].yard*f[farmerno].fndness;


			farmerno--;
		}
		printf("%.0lf",sum);
testcase--;
}





}


