
/*   ACM 483 */
#include<stdio.h>
#include<string.h>

void main()
{
int l=0,i,j,startb,endb;
char string[500];




while(gets(string)!=0)
{
	i=0;
	startb=0;
	endb=0;
		
		if(string[0]=='\0')
			break;
	
		l=strlen(string);

		while(string[i]!='\0')
		{
			if(string[i]==' '||string[i]=='\t')
			{
			
				endb=i-1;
			
				for(j=endb;j>=startb;j--)
					printf("%c",string[j]);
			

				printf(" ");
				startb=i+1;
		
			}
		
		i++;
		
		}

		
		for(j=l-1;j>=startb;j--)
			printf("%c",string[j]);

			printf("\n");


}











}
