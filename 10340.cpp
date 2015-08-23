#include<stdio.h>
#include<string.h>

void main()
{

int lens,lent;
char st[20000];
char s[10000],t[10000];
int i,j;

while(gets(st)!=0)
{
	i=0;
	while(st[i]!=' ')
	{
		s[i]=st[i];
		i++;
	}
	s[i]=NULL;
	j=0;
	while(st[i+1]!=NULL)
	{
		t[j]=st[i+1];
		j++;
		i++;
    }
	t[j]=NULL;

	lens=strlen(s);
    lent=strlen(t);
    
	 i=0;
	for(j=0;j<lent;j++)
{
		 
		if(s[i]==t[j]) 
        	i++;	
		if(i==lens)
			break;
}
	if(i==lens)
      printf("Yes");
	else
		printf("No");

	printf("\n");

}
}