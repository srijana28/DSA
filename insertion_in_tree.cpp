#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* createNode(int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
Node* insertNode(Node* root, int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    if(data<root->data)
    {
        root->left=insertNode(root->left,data);
    }
    else{
        root->right=insertNode(root->right,data);
    }
    return root;
}
void preorderTraversal(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void inorder(Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void postorder(Node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
   Node* root=NULL;
   int n,data;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>data;
       root=insertNode(root,data);
   }
   preorderTraversal(root);
}
