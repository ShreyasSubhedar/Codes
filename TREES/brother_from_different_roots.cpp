{
/*Input : BST 1:    5        
                /   \      
               3     7      
              / \   / \    
             2  4  6   8   

        BST 2:    10        
                /   \      
               6     15      
              / \   /  \    
             3  8  11  18
        x = 16
    
Output : 3
The pairs are:
(5, 11), (6, 10) and (8, 8)*/
// C++ implementation to count pairs from two
#include <bits/stdc++.h>
using namespace std;
// structure of a node of BST
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
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
int countPairs(Node* root1, Node* root2, int x);
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node* root1 = NULL;
        Node* root2 = NULL;
        int n1, n2, k;
        cin>>n1;
        for(int i=0; i<n1; i++)
        {
            cin>>k;
            insert(&root1, k);
        }
        cin>>n2;
        for(int i=0; i<n2; i++)
        {
            cin>>k;
            insert(&root2, k);
        }
        int s;
        cin>>s;
        cout<<countPairs(root1, root2, s)<<"
";
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Structure of the Node of the BST is as
struct Node {
	int data;
	Node* left, *right;
};*/
// You are required to complete this function
bool findNode(Node * r,int val){
    bool b=false;
    if(r!=NULL){
    if(r->data==val)findNode(r->left,val)||findNode(r->right,val))
    b=true;
    }
    return b;
    
}
int countPairs(Node* root1, Node* root2, int x)
{
    if(root1==NULL)
    return 0;
    if(findNode(root2,x-root1->data)==true)
    return 1+countPairs(root1->left,root2,x)+countPairs(root1->right,root2,x);
    else
return countPairs(root1->left,root2,x)+countPairs( root1->right,root2, x);
}
