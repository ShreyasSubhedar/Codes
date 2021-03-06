#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};
void printPaths(struct Node *root);

void inorder(struct Node* root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<' ';
    inorder(root->right);
}

/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  cin>>t;
  while (t--)
  {
     map<int, Node*> m;
     int n;
     cin>>n;
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     printPaths(root);
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/
/* The function should print all the paths from root
 to leaf nodes of the binary tree */
void imp(Node * root,string path){
    if(root->left==NULL&&root->right==NULL)
     cout<<path<<root->data<<" #";
     else{
         imp(root->left,path+to_string(root->data)+" ");
         imp(root->right,path+to_string(root->data)+" ");
     }
}
void printPaths(Node* root)
{
 
imp(root,"");
cout<<"\n";
}

