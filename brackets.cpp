#include<iostream>
#include<stdlib.h>
using namespace std;
int *stack;
int max_size;
int index=0;
int push(int value)
{
	if(max_size==index)
	{
		cout<<"overflow";
	//	return 0;
	}
	else{
		stack[index]=value;
		index=index+1;
	    
	  }
}
int pop()
	{
		if(index==0)
		{
			cout<<"underflow";
			//return 0;
		}
		else{
			index=index-1;
		}
	}
int display(){
for(int i=0;i<index;i++)
{
	cout<<stack[i]<<endl;
}
}	
int main()
{
	string s="[](){";
	int x=s.length();
	max_size=x;
	stack=(int *)calloc(sizeof(int),x);
	for(int i=0;i<x;i++)
	{
		if(s[i]=='[' || s[i]=='{' || s[i]=='(')
		{
			if(s[i]=='(')
			{
				push(1);
			}
			else if(s[i]=='[')
			{
				push(2);
			}
			else
			{
				push(3);
			}
		}
		else
		{
			int ci;
			if(s[i]==')')
			{
				ci=1;
			}
			else if(s[i]==']')
			{
				ci=2;
			}
			else
			{
				ci=3;
			}
            if(ci==stack[index-1])
            {
            	pop();
			}
		}
	}
	if(index==0)
	{
		cout<<"valid";
	}
	else
	{
		cout<<"invalid";
	}
}
