#include<stdio.h>
#include<iostream.h>

int sumofs(int s, int k, int r);
int x[10],w[10], m;
int main(void)
{
	
	int  sum=0,n;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
	  cin>>w[i];
	  sum+=w[i];
	}
	sumofs(0,1,sum);

	getch();
	return 0;
}
int sumofs(int s, int k, int r){
	x[k]=1;
	if(s+w[k]==m){
	    for(int i=1;i<=k; i++){
		   cout<<x[i];
	    }
	    cout<<"\n";
	}
	else if(s+w[k]+w[k+1]<=m)
		sumofs(s+w[k],k+1,r-w[k]);

	if((s+r-w[k]>=m)&& (s+w[k+1]<=m)){
		x[k]=0;
		sumofs(s,k+1,r-w[k]);
	}
	return 0;
}