//stack lifo based last in first out
#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
void push(node *head,int val)
{
	if(!head)
	{
 	head=new node();
	head->data=val;
	head->next=NULL;	
	}
	else
	{
		node *newnode=new node();
		newnode->data=val;
		newnode->next=NULL;
		while(head->next)
		{
			head=head->next;
		}
		head->next=newnode;
	}
}
void pop(node *head)
{
	if(!head)
	{
		cout<<"onderflow\n";
	}
	else
	{
		node *t=head;
		head=head->next;
		while(head->next)
		{
			t=t->next;
			head=head->next;
		}
    	t->next=NULL;
	}
}
int display(node *head)
{
	if(!head)
	{
		cout<<"empty list";
		return 0;
	}
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<"\n\n";
}
int main()
{
node *head=NULL;
head=new node();
head->data=10;
head->next=NULL;
push(head,20);
push(head,30);
push(head,40);
push(head,50);
display(head);
pop(head);
display(head);

    
}


