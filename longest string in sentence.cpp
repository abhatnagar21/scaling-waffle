#include<iostream>
using namespace std;
int main()
{
	string a="hi my name is jarvis";
	int l=0,r=l+1;
	int start=0,end=0;
	int diff=end-start;
	while(l<a.length())
	{
		while(a[r]!=' '&&r<a.length())
		{
			r=r+1;
		}
		
		if(diff<r-l)
		{
			diff=r-l;
			start=l;
			end=r;
		}
		l=r;
		r=l+1;
	}
	cout<<diff-1<<endl;//tells the lenght of the string
	cout<<start<<endl;//tells the starting index
	cout<<end<<endl;//tells the ending index
	for(int i=start;i<end;i++)
	{
		cout<<a[i];//displays the longest string
	}
}
