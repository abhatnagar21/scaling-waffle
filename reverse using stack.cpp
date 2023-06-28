#include<iostream>
using namespace std;
	int top=-1;
	char reverse[100];
void push(char c)
{
	top++;
	reverse[top]=c;
	}	
void display()
{
	for(int i=top;i>0;i++)
	{
		cout<<reverse[i];
	}
}
int main()
{
	string g;
	g="hey there";
	for(int i=0;i<g.length();i++)
	{
		push(g[i]);
	}
	display();
}
