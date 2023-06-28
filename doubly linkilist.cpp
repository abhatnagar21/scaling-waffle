#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *next;
		node *prev;
};
node *insertathead(node *head,int data)
{
	node *h=new node();
	h->val=data;
	h->next=head;
	head->prev=head;
	return h;
}
void append(node *head,int data)
{
	node *n=new node();
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=n;
	n->val=data;
	
}
void display(node *head)
{
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
}
int main()
{
	node *head=new node();
	head->val=10;
	head=insertathead(head,327);
   head=append(head,98);
	display(head);
}

