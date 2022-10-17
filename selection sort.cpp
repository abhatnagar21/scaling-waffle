#include<iostream>
using namespace std;
int main()
{
	int a[]={12,3,4,67,89};
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	cout<<"after sorting";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
