#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
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
bool isHeap(struct Node * tree);
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
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
     cout << isHeap(root)<< endl;
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
bool check(Node *tree){
    if(tree==NULL)
    return true;
    if(tree->left!=NULL){
        if(tree->left->data>=tree->data)
        return false;
    }
    if(tree->right!=NULL){
        if(tree->right->data>=tree->data)
        return false;
    }
    return (check(tree->left)&&check(tree->right));
}
/*You are required to complete this method */
bool isHeap(Node * tree)
{
 return check(tree);
}
