#include<iostream>
using namespace std;
int a[100],b[100],c[100];
void merge(a[],b[],m,n,x)
{
	int i,j,k;
	i=j=k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		k++;
		i++;
		
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	
}
void display()
{
	for(int i=0;i<x;i++)
	{
		cout<<c[i]<<endl;
	}
}
int main()
{
	
	int m,n,x
	cout<<"first array size pls,m\n";
	cin>>m;
	cout<<"second array pls,n\n";
	cin>>n;
	x=m+n;
	cout<<"enter m elements for A array\n";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<"enter n elements for B array\n";
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<"now the merged sorted array is\n";
	merge(a[m],b[n],m,n,x)
	display();
	
	
}
