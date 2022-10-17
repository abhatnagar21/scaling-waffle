#include<iostream>
using namespace std;
class node
{
	public:
	int val;
	node *next;
};
node* insertnode(node *head,int data)
{
	node *n=NULL;
	n=new node();
	n->val=data;
    n->next=head;
	return n;	
}
void appendnode(node *head,int data)
{
	node *n=NULL;
	n=new node();
	n->val=data;
	while(head->next)
	{
		head=head->next;
	}
    head->next=n;
}
void addnode(node *head,int data,int index)
{
	node *n;
	n=new node();
	n->val=data;
	int i=0;
	while(head && i!=index-1)
	{
		head=head->next;
		i=i+1;
	}
	if(head)
	{
	  n->next=head->next;
	  head->next=n;
	}
	else
	{
		cout<<"index out of range";
	}
	
}
void display(node *head)
{
	while(head)
	{
		cout<<head->val<<",";
		head=head->next;
	}
}
int main()
{
	node *head=NULL;
    head=new node();
    head->val=10;
    head=insertnode(head,20);
    head=insertnode(head,30);
	appendnode(head,40);
	appendnode(head,50);
	appendnode(head,60);
	addnode(head,70,3);
	display(head);   
}

