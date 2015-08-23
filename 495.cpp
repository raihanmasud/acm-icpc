#include<stdio.h>
#include<string.h>
char f0[5000],f1[5000],f[8000];
char ff[5000];

void findfib()
{

int carry,len1,len2;
int a,b,c,r,i,k;
carry=k=0;
len1=strlen(f1);
len2=strlen(f0);
len2--;

for(i=len1-1;i>=0;i--)
{
  a=f1[i]-48;
  if(len2>=0)
  {
	  b=f0[len2]-48;
	  len2--;
  }
  else
	  b=0;
  r=a+b+carry;
  if(r>10)
	  carry=1;	 
  else
	  carry=0;
  a=r%10;
  r=r/10;
  f[k]=a+48;
  k++;
}

if(r>0)
{
	a=r%10;
    f[k]=a+48;
	k++;
}

f[k]='\0';
//strrev(f);
k=0;
for(i=strlen(f)-1;i>=0;i--)
{
	ff[k]=f[i];
	k++;
}
ff[k]=NULL;
strcpy(f,ff);
strcpy(f0,f1);
strcpy(f1,f);

}





void main()
{

int i,n;
while(scanf("%d",&n)==1)
{
strcpy(f0,"0");
strcpy(f1,"1");
strcpy(f,"");
  for(i=1;i<n;i++)
	  findfib();
printf("The Fibonacci number for %d is ",n); 
printf("%s",f1);
  printf("\n");
}

}