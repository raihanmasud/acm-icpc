#include<stdio.h>
#include<string.h>

char n1[10000],n2[10000];
char temp[10000],result[10000],temp1[10000];
char aux[10000];




void add(int len)
{
int i,j,k,a,b,r,c=0;
int l;

l=strlen(temp1);
k=0;
j=1;
for(i=0;i<len;i++)
{
 a=temp[i]-48;
 if(j<l)
 {
	 b=temp1[j]-48;
	 j++;
 }
 else
	 b=0;
 r=a+b+c;
 aux[k]=r%10+48; k++;
 c=r/10;
}
while(c>0)
{
 aux[k]=c%10+48; k++;
 c=c/10;
}

aux[k]=NULL;
strcpy(temp,aux);
}



void mul(char c,int len2)
{
int i,j=0,carry=0;
int a,b,r;
for(i=len2-1;i>=0;i--)
{
 a=n2[i]-48;
 b=c-48;
 r=a*b+carry;
 temp[j]=r%10+48;
 j++;
 carry=r/10;
}

while(carry>0)
{
 temp[j]=carry%10+48;
 carry=carry/10;
 j++;
}
temp[j]='\0';
add(strlen(temp));

}


void main()
{

int len1,len2,i,k;

while(gets(n1))
{
k=0;
len1=strlen(n1);
gets(n2);
len2=strlen(n2);
strcpy(temp1,"00");
  for(i=len1-1;i>=0;i--)
  {
    mul(n1[i],len2);
    result[k]=temp[0];
	strcpy(temp1,temp);
	k++;
  }

for(i=1;i<strlen(temp);i++)
{
 result[k]=temp[i];
 k++;
}
int j;
result[k]='\0';
len1=strlen(result);
strcpy(n1,"");
   for(j=1;j<=len1;j++)
	   strcat(n1,"0");
if(strcmp(n1,result)!=0)
{
	for(j=len1-1;j>=0;j--)
		printf("%c",result[j]);
}
else
 printf("0");
printf("\n");
}

}