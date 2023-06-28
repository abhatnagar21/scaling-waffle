//rear=(rear+1)%size =circular queue if (rear+1)%size=front overfloe condition  
#include<iostream>
using namespace std;
int arr[5];
int size=4;
int front=-1;
int rear=-1;
int index=0;
int val;
int push(int val)
{
	if(front==-1&&rear==-1)
	{
		arr[index]=val;
		rear=0;
		front=0;
	}
	else{
		rear=(rear+1)%size;
		arr[rear]=val;
	}
}
int pop()
{
	if(front==-1&&rear==-1){
		cout<<"underflow"<<endl;
	}
	else{
		front=(front+1)%size;
		for(int i=front;i<rear;i++)
		{
			arr[i]=arr[i+1];
		}
	}
}
void display()
{
	for(int i=front;i<rear;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	push(3);
	push(8);
	display();
}
