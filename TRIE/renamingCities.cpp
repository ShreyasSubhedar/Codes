#include<bits/stdc++.h>
using namespace std;

map<string, int> m;
struct TrieNode{
    bool isEnd;
    bool vis;
    unordered_map<char,TrieNode*>child;
    TrieNode(){
        isEnd = false;
        vis = false;
    }
};

void insert(TrieNode *root, string s){
    TrieNode *curr = root;
    for(int i = 0; i<s.size(); i++){
        if(curr->child[s[i]]==NULL)
            curr->child[s[i]] = new TrieNode();
        curr = curr->child[s[i]];
    }
    curr->isEnd = true;
}

string findUniqueCode(TrieNode *root, string s){
    if(s.size()==1){
        root->child[s[0]]->vis = true;
        return s;
    }
    string ans = "";
    TrieNode *curr = root;
    int flg = 0;
    for(int i = 0; i<s.size(); i++){
        ans+=s[i];
        if(curr->child[s[i]]->vis){
            curr = curr->child[s[i]];
        }
        else{
            flg = 1;
            for(int j = i; j<s.size(); j++){
                curr->child[s[j]]->vis = true;
                curr = curr->child[s[j]];
            }
            break;
        }
    }
    m[ans]++;
    if(flg==0){
        ans+=" "+to_string(m[ans]+1);
    }
   return ans;
}


int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string cities[n];
	    TrieNode *root = new TrieNode();
	    for(int i = 0; i<n; i++){
	        cin>>cities[i];
	        insert(root, cities[i]);
	    }
	    for(int i = 0; i<n; i++){
	        cout<<findUniqueCode(root, cities[i])<<endl;
	    }
	}
	return 0;
}
