/*  Constructing All Subsets. (Power set)
    Input: n ( Number of elements in a set)
    Output: 2 to the n subsets .

    Example: Original set = {a,b}; n=2.
		   subsets=> {},{b},{a},{a,b}
		   i.e. {0,0}, {0,1},{1,0}, {1,1}                */


#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#define N 10
#define TRUE 1
#define FALSE 0
void backtrack(int a[], int k, int n);
int check_solution(int a[], int k, int n);
void process_solution(int a[], int k);
void construct_candidates(int a[], int k, int c[], int *candidates);
int num_soln=0;  // Number of solutions
int main (void)
{
	int a[N+1],n;

	clrscr();
	cout<<" Enter N (1<=n<=3):";
	cin>>n;
	backtrack(a,0,n);
	cout<<"\n\n\n\t"<<num_soln<<"  solutions.";
	getch();
	return 0;
}
void backtrack(int a[], int k, int n)
{
	int c[N];
	int candidates;
	if(check_solution(a,k,n))
		process_solution(a,k);

	else{
		k=k+1;
		construct_candidates(a,k,c,&candidates);
		for(int i=0;i<candidates;i++){
			a[k]=c[i];
			backtrack(a,k,n);
		}
	}
}
void construct_candidates(int a[], int k, int c[], int *candidates)
{
	c[0]=FALSE;
	c[1]=TRUE;
	*candidates=2;
}
int check_solution(int a[], int k, int n)
{
	if(k==n)
		return 1;
	else
		return 0;
}
void process_solution(int a[], int k)
{
	cout<<"\n";
	cout<<"{ ";
	for(int i=1;i<k;i++)
		//if(a[i])cout<<i<<",";
		cout<<a[i]<<", ";
	if(i==k){
		cout<<a[i];
		cout<<" }";
	}
	num_soln++;
}