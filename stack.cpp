#include"stdio.h"
#include"string.h"
#include"ctype.h"
int top=0;
char st[12],stack[34];


void push(char ch)
{
	stack[top]=ch;
top++;


}

void pop()
{
top--;

}


void main()
{
	
gets(st);
int l=strlen(st);
int i=0;
while(l>0)
{
if(st[i+1]==',')
push(st[i]);

i++;
l--;
}

push(st[i]);
int c;
c=top;

while(c>0)
{
	if(isdigit(st[c]))
	{
	 pop();
     printf("%s",st[top]);
	}
	 c--;
}





}