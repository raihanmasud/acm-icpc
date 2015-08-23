/******   Constracting All Permutation using Backtracking. *****************
    Input: n ( Number of elements for permutation)
    Output: All possible permutation.

    Example: Input :  n=2.
		   Output: 12,21.

		   2 permutations. 			*/


#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
//#define NMAX 50                // maximum elements for permutation
#define TRUE 1
#define FALSE 0


void backtrack(int *a, int k, int n);
int check_solution(int *a, int k, int n);
void process_solution(int *a, int k);
void construct_candidates(int *a, int k, int *c, int *candidates);

//int elements[NMAX+1];
int num_solution=0, NMAX;// num_solution=no. of solution
int main (void)
{
	int *a;

	clrscr();
	cout<<" Enter number of elements for permutation (1<=n<=10):";
	cin>>NMAX;
	//NMAX+=1;
	a=(int *)malloc((NMAX+1)*sizeof(int));
	/*cout<<" Enter elements of the set:";
	for(int i=1;i<=n;i++)
		cin>>elements[i];
	cout<<"\nEnter Target Sum :";
	cin>>target_sum;      */
	backtrack(a,0,NMAX);
	if(!num_solution)
		cout<<"\n\n    No solution.....";
	else
		cout<<"\n\n    "<<num_solution<<"   solutions";
	getch();
	return 0;
}
void backtrack(int *a, int k, int n)
{

	int *c;
	c=(int *)malloc(n*sizeof(int));
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
void construct_candidates(int *a, int k, int *c, int *candidates)
{
 //	c=(int *)malloc(NMAX*sizeof(int));//Array index NMAX= maximum candidates for permutation.
	a[0]=0;
	//int c[NMAX];
	int *in_permu;// which are in the permutation
		in_permu=(int *)malloc((NMAX+1)*sizeof(int));
	for(int i=1;i<NMAX+1;i++)in_permu[i]=FALSE;
	for(i=0;i<k;i++)in_permu[a[i]]=TRUE;
	*candidates=0;
	for(i=1;i<=NMAX;i++){
		if(in_permu[i]==FALSE){
			c[*candidates]=i;
			*candidates+=1;
		}
	}
}
int check_solution(int *a, int k, int n)
{
	if(k==n)
		return 1;
	else
		return 0;
}
void process_solution(int *a, int k)
{
	cout<<"\n";
	for(int i=1;i<=k;i++)
		cout<<a[i];
	cout<<"\n";
	num_solution++;
}