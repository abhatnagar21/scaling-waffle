#include<iostream>
#include<string.h>
using namespace std;
int stack[100];
int index;
char c;
void push(char c)
{
	stack[index]=c;
	index++;
}
void pop()
{
	index--;
}
void display()
{
	cout<<index<<endl;
}
int main()
{
	string s="(()))())";
	int x=s.length();
	for(int i=0;i<x;i++)
	{
		if(s[i]=='(')
		{
			push('(');
		}
		else{
			pop();
		}
	}
	display();
	if(index==0)
	{
		cout<<"valid combination";
	}
	else{
		cout<<"invalid"<<endl;
	}
}
