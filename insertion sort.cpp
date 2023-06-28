#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<5;i++)
	{
		int cur=arr[i];
		int j=i-1;
		while(arr[j]>cur &&j>=0)//is previous element is larger than current element we swap
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=cur;
	}
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<" ";
}}
	
