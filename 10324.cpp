#include<stdio.h>
#include<string.h>

void main()
{

char ch[1000001],c;
int counter[1001];
long pos1[1001],pos2[1001],n,tot=1;
long len,i,count=0;
i=0;

//for(j=1;j<1001;j++)
//  counter[j]=0;
counter[0]=0;
scanf("%c",&c);
if(c=='\n')
  c='4';
while((c!='\n')&&c!=EOF)
{

	i=0;
	count=0;
	while(c!='\n')
	{
		ch[i]=c;
		i++;
		scanf("%c",&c);
		if(c!=ch[i-1])
		{
		 count++;
		counter[i]=count;
		}
	   else
		   counter[i]=count;
	}

	fflush(stdin);

	len=strlen(ch);
	scanf("%ld",&n);

	for(i=1;i<=n;i++)
		scanf("%ld%ld",&pos1[i],&pos2[i]);

	printf("Case ");
	printf("%ld:",tot);
	printf("\n");
    tot++;
	for(i=1;i<=n;i++)  

	{
		if(counter[pos1[i]]==counter[pos2[i]])
		printf("Yes");
		else
		printf("No");
		printf("\n");
	}
	
	fflush(stdin);
	scanf("%c",&c);
	   
}

}