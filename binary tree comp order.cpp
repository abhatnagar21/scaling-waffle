#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
		
		node(int val)
		{
			data=val;
			node *left=NULL;
			node *right=NULL;
			
		}
};
void displayinorder(node *first)
{
	if(first==NULL)
		{
			return;
		}
		
	displayinorder(first->left);
	cout<<first->data<<" ";
displayinorder(first->right);
}
void displaypreoreder(node *first)
{
    	if(first==NULL)
		{
			return;
		}
		
    cout<<first->data<<" ";
    displaypreoreder(first->left);
    displaypreoreder(first->right);
}
void displaypostorder(node *first)
{
    	if(first==NULL)
		{
			return;
		}
		
    displaypostorder(first->left);
    displaypostorder(first->right);
    cout<<first->data<<" ";
}
int main()
{
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(50);
	root->right->right=new node(60);
	displayinorder(root);
	//displaypreoreder(root);
	displaypostorder(root);
	
}
