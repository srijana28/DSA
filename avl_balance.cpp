#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int key;
		Node *left;
		Node *right;
		int height;
		
};
int height(Node *N)
{
	if(N==NULL)
	return 0;
	return N->height;
}
int max(int a, int b)
{
	return(a>b)?a:b;
}
Node* newNode(int key)
{
	Node* node=new Node();
	node->key=key;
	node->left=NULL;
	node->right=NULL;
	node->height=1;
	return(node);
}
//rotate subtree rooted with y
//utility function to right
Node *rightRotate(Node *y)
{
	Node *x=y->left;
	Node *T2=x->right;
	//perform rotation
	x->right=y;
	y->left=T2;
	//update heights
	y->height=max(height(y->left),height(y->right))+1;
	x->height=max(height(x->left),height(x->right))+1;
	//reurn new root
	return x;
}
Node *leftRotate(Node *x)
{
	Node *y=x->right;
	Node *T2=y->left;
}
