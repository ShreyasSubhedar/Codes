{
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
/* Function to get diameter of a binary tree */
long long treePathsSum(Node *root);
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
     cout << treePathsSum(root) << endl;
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*You are required to complete below method */
vector<string>V;
void imp(Node *root,string path){
    if(root->left==NULL&&root->right==NULL){
        path+=to_string(root->data)+"#";
       // cout<<path<<"\n";
        V.push_back(path);
        
}
    else{
        imp(root->left,path+to_string(root->data)+"#");
        imp(root->right,path+to_string(root->data)+"#");
    }
}
long long treePathsSum(Node *root)
{
    imp(root,"");
    long long int ans=0;
    for(auto i:V){
        int o=0;
        for(auto j:i){
            if(j=='#')
            o++;
        }
        std::string s = i;
        o--;
std::string delimiter = "#";
size_t pos = 0;
std::string token;
while ((pos = s.find(delimiter)) != std::string::npos) {
    token = s.substr(0, pos);
    ans+=stoll(token,nullptr,10)*(pow(10,o));
    o--;
    
    s.erase(0, pos + delimiter.length());
        
    }
    
}
V.clear();
    return ans;
}
