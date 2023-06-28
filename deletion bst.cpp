#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *left=NULL;
		node *right=NULL;
		
};
node *deletion(node *root,int key)
{
	if(key<root->val)
	{
		root->left=deletion(root->left,key);
	}
	else if(key>root->val)
	{
		root->right=deletion(root->right,key);
	}
	else {
		if(root->left=NULL)
		{
			node *temp=root->right;
			delete(root);
			return temp;
		}
		else if(root->right=NULL)
		{
			node *temp=root->left;
			delete(root);
			return temp;
		}
		
	}
}
int main()
{
	 node *head=new node();
	 head->right=new node();
	 head->left=new node();
	 head->left->left=new node();
	 head->right=new node();
	 head->right->left=new node();
	 head->val=90;
	 head->left->val=80;
	 head->left->left->val=50;
	 head->right->val=100;
	 head->right->left->val=99;
	 deletion(head,99);
}
