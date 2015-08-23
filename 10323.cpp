#include<stdio.h>

void main()
{

long int n;
while(scanf("%ld",&n)!=EOF)
{

	if(n>13)
	    printf("Overflow!");

	else if(n<8)
		printf("Underflow!");

	else
		{

		if(n==13)
			printf("6227020800");

		if(n==12)
			printf("479001600");
		if(n==11)
			printf("39916800");
		if(n==10)
			printf("3628800");
		if(n==9)
			printf("362880");
		if(n==8)
			printf("40320");
		}


printf("\n");

}


}