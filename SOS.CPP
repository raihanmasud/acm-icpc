/******   SUM OF SUBSET PROBLEM  *****************
	Constructing All Subsets. (Power set)
    Input: n ( Number of elements in a set)
    Output: 2 to the n subsets .

    Example: Original set = {a,b}; n=2.
		   subsets=> {},{b},{a},{a,b}
		   i.e. {0,0}, {0,1},{1,0}, {1,1}     ******************/

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

int elements[N+1];
int target_sum, num_solution=0;// num_solution=no. of solution
int main (void)
{
	int a[N+1],n;

	clrscr();
	cout<<" Enter number of elements of the set (1<=n<=10):";
	cin>>n;
	cout<<" Enter elements of the set:";
	for(int i=1;i<=n;i++)
		cin>>elements[i];
	cout<<"\nEnter Target Sum :";
	cin>>target_sum;
	backtrack(a,0,n);
	if(!num_solution)
		cout<<"\n\n    No solution.....";
	else
		cout<<"\n\n    "<<num_solution<<"   solutions";
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
/*			if(FALSE)
				return; */
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
	int sum=0, subset[N], initial_index=0;

	for(int i=1;i<=k;i++){
		if(a[i]){
			sum+=elements[i];
			subset[initial_index]=elements[i];
			initial_index++;
		}
	}
	if(sum==target_sum){
		cout<<"{ ";
		for(i=0;i<initial_index;i++)
			cout<<subset[i]<<",";
		num_solution++;
		cout<<"}\n\n";
	}
	 //	cout<<i<<",";
		//cout<<a[i]<<", ";

}