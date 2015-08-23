#include<stdio.h>
void main()
{
int L,H,R;
int arr[10002];
int i=0,startL,endL;
for(i=0;i<10000;i++)
arr[i]=0;

int c=0;
scanf("%d%d%d",&L,&H,&R);
startL=L;
while(scanf("%d%d%d",&L,&H,&R))
{

	for(i=L;i<R;i++)
	{
	if(H>arr[i])
		arr[i]=H;
	
	}
	 

}
endL=L;

printf("%d%d",startL,arr[startL]);	

for(i=startL+1;i<=endL;i++)
{
    	
	if(arr[i]!=arr[i-1])
	printf("%d %d",i,arr[i]);



}



}












