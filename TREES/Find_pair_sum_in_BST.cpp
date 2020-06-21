/ Initial Template for C++
// CPP program to find a pair with
// given sum using hashing
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
Node* insert(Node* root, int key) {
    if (root == NULL) return new Node(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
bool findPair(Node* root, int sum);
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {
        Node* root = NULL;
        int n, x;
        cin >> n;
        int val;
        for (int i = 0; i < n; i++) {
            cin >> val;
            root = insert(root, val);
        }
        cin >> x;
        if (findPair(root, x))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/* BST Node
struct Node {
    int data;
    struct Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/
// This function should return true
// if there is a pair in given BST with
// given sum.
int inorder(Node *root,int q){
    if(root==NULL)
    return 0;
    if(q==root->data)
        return 1;
    if(q<root->data)
        inorder(root->left,q);
        else if(q>root->data)
        inorder(root->right,q);
        
}
/*int find(Node *root,int sum,unordered_map<int,int>M){
if(root==NULL)
return false;
if(M.find(sum-root->data)!=M.end())
return true;
return find(root->left,sum,M)||find(root->right,sum,M);
}*/
bool findPair(Node* root, int sum) {
//unordered_map<int,int>M;
//return find(root,sum,M);
    for(int i=0;i<=sum;i++){
        if(inorder(root,i)&&inorder(root,sum-i)&&(i!=sum-i)){
        return 1;
        }
    }
    return 0;
}

