#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left=NULL;
		node *right=NULL;
		
};
void preorder(node *head){
	
	if(head==NULL)
	{
		return;
	}
	cout<<head->data<<" ";
	preorder(head->left);
	preorder(head->right);
	
}
int main()
{
	node *head=new node();
	head->data=20;
	head->left=new node();
	head->left->data=40;
	head->right=new node();
	head->right->data=50;
	head->left->left->data=409;
	head->right->right->data=900;
	preorder(head);
	}
