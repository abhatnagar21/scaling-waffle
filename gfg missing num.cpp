#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int arr[]={6,1,2,8,3,4,7,10,5};
	for(int i=1;i<=10;i++)
	{
	int found=0;
		for(int j=0;j<9;j++)
		{
			if(arr[j]==i)
			{
				found=1;
				break;
			}
		}
		if(found==0)
		{
			cout<<i;
		}
	}
}
