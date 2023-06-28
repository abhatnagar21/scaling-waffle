#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int count=1;
	while(count<5)
	{
		for(int i=0;i<5-count;i++)
		{
			if(arr[i]>arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}
		}
		count++;
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
