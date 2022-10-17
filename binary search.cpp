#include<iostream>
using namespace std;
int main()
{
	int data[]={10,20,30,40,50,60,70};
	//linear search
	//binary search
	/*
	e=50
	mid=3
	l=0
	r=7
	l<r	
	*/
	int l=0,r=6;
	int e=50;
	while(l<=r)
	{
		int mid=(l+r)/2;//3,1,2
		if(data[mid]==e)//40==30,20==30,
		{
		    cout<<"found index "<<mid;	
		    return 0;
		} 
		else if(data[mid]<e)//40<30,20<30
		{
			l=mid+1;//2
		}
		else
		{
		   r=mid-1;//r=2	
		}
	}
	cout<<"not found";
}
