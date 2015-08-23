#include<stdio.h>
#include<math.h>
void main()
{
int N,dif,c,i,num1;
int num2;
	while(scanf("%d",&N)!=EOF)
		{

			i=1;
			c=0;
			
			scanf("%d",&num1);


			if(N==1)
			{
				if( num1==1)
				{
				printf("Jolly");
				
				}

				else
				{
				printf("Not jolly");
				
				}
				printf("\n");
				
			
			continue;
			
			}
				for(;i<N;i++)
				{
				scanf("%d",&num2);
				dif=abs(num1-num2);
				num1=num2;

				if(dif!=N-i)
					{
					c=1;
					
					//break;
					}


				}
			
			if(c==0)
				printf("Jolly");
			else
			printf("Not jolly");	
			
			printf("\n");

}



}