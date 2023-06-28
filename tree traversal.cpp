#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left=NULL;
		node *right=NULL;
		
};
void preorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	
}
void inorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main()
{
	
	node *head=new node();
	head->data=67;
	head->left=new node();
	head->left->left=new node();
	head->right=new node();
	head->right->right=new node();
	head->left->data=98;
	head->right->data=87;
	head->left->left->data=76;
	head->right->right->data=54;
	preorder(head);
	cout<<endl;
	inorder(head);
	cout<<endl;
	postorder(head);
}
