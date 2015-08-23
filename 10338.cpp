#include<stdio.h>
#include<string.h>

void main()
{
 char ch[92];
 int i=0,j,k,max;
 int count[95],len;
 int dif; 
 while(gets(ch)!=0)
 {
	 i=0;
	len=strlen(ch);
	for(j=65;j<=90;j++)
		count[j]=0;
	 while(ch[i]!=NULL)
   { 
	   
	   for(j=65;j<=90;j++)
	   {
	     if(ch[i]==j)
			 count[j]++;
	   }
      //printf("%c %d ",ch[i],count[ch[i]]);
	   i++;
   }

for(j=65;j<91;j++)
 if(count[j]!=0)
 printf("%d",count[j]);
j=0;
max=count[j];
int pos;
 for(j=1;j<i;j++)
 {
   if(count[j]>max)
   {
	   max=count[j];
	   pos=j;
   }
 }
 
dif=len-max;


 }
}