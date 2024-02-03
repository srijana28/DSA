#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* left;
	Node* right;
};
struct Node* createNode(int data)
{
	struct Node* newNode=new Node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct Node* insertNode(Node* root,int data)
{
	if(root==NULL)
	{
		return createNode(data);
	}
	else if(data<root->data)
	{
		root->left=insertNode(root->left,data);
	}
	else
	root->right=insertNode(root->right,data);
	return root;
}
void preorderTraversal(Node* root)
{
	if(root!=NULL){
	
	cout<<root->data<<" ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);}
	
}
Node* findminimum(Node* root)
{
	if(root->left==NULL)
	return root;
	return(findminimum(root->left));
}
Node* deleteNode(Node* root,int value)
{
	if(root==NULL)
	{
		cout<<"Not found\n";
	}
	else if(value<root->data)
	{
		root->left=deleteNode(root->left,value);
	}
	else if(value>root->data)
	{
		root->right=deleteNode(root->right,value);
	}
	else
	{
		if(root->left==NULL&&root->right==NULL)
		root==NULL;
		else if(root->left==NULL)
		root=root->right;
		else if(root->right==NULL)
		root=root->left;
		else
		{
			Node* temp=findminimum(root->right);
			root->data=temp->data;//data overidden
			root->right=deleteNode(root->right,temp->data);//only deleting the node
		}
	}
	return root;
}

int main()
{
	int n,data,value;
	Node* root=NULL;
	Node* del=NULL;
	cout<<"enter the n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		root=insertNode(root,data);
	}
	preorderTraversal(root);
	cout<<"enter the value to be deleted:";
	cin>>value;
	del=deleteNode(root,value); // = root
	cout<<"\n Traversal after deletion:\n";
	preorderTraversal(root);
}
