#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	/*int i=0,end=n-1;
	int target;
	cin>>target;
	int mid=(i+end)/2;
	while(i<=end)
	{
		if(target>arr[mid])
		{
			i=mid+1;
		}
		else if(target<arr[mid]){
			end=mid-1;
		}
		else{
			cout<<mid;
		}
	}*/
}
