{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *createNewNode(int value)
{
    Node *temp=new Node;
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}
Node *newNode(Node *root,int data)
{
    if(root==NULL)
    root=createNewNode(data);
    else if(data<root->data)
    root->left=newNode(root->left,data);
    else
    root->right=newNode(root->right,data);
    return root;
    
}
//Position this line where user code will be pasted.
int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        Node *root=NULL;
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            root=newNode(root,arr[i]);
        }
        
        levelOrder(root);
        cout<<endl;
        
        
    }
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
void levelOrder(Node *root)
{
    if(root==NULL)
return;
queue<Node*> q;
q.push(root);
while(!q.empty())
{
Node* temp=q.front();
cout<<temp->data<<" ";
q.pop();
if(temp->left!=NULL)
q.push(temp->left);
if(temp->right!=NULL)
q.push(temp->right);
}
    //Your code here
    //Level order traversal is traversing level by level, left to right
}

