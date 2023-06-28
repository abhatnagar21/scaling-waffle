#include<iostream>
using namespace std;
class node{
	public:
	int val;
	node *left=NULL;
	node *right=NULL;
	
};
node *search(node *root,int key)
{
	if(root==NULL)
	{
		cout<<"not found";
	}
	if(root->val==key)
	{
		cout<<root->val;
		cout<<"found";
	}
	else if(root->val>key)
	{
		return search(root->left,key);
	
	}
	else if(root->val<key){
		return search(root->right,key);
		}
		else{
			cout<<"not found";
		}
	
}
int main(){
	node *head=new node();
	head->left=new node();
	head->right=new node();
	head->left->left=new node();
	head->val=10;
	head->left->val=5;
	head->left->left->val=2;
	head->right->val=76;
	search(head,760);
}
