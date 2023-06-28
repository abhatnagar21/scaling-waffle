#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s=")()())";
	vector<char> x;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[0]==')')
		{
			continue;
		}
		else if(s[i]=='(')
		{
			x.push_back(s[i]);
		}
		else if(s[i]==')')
		{
			x.pop_back();
			count+=2;
		}
	}
	cout<<count;
}
