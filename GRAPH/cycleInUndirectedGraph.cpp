#include<bits/stdc++.h>
using namespace std;
bool bfs(int s, vector<int> adj[], bool vis[], int V)
{
    queue<int> q;
    int parent[V] = {-1};
    vis[s] = true;
    q.push(s);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int i = 0; i < adj[curr].size(); i++){
            if(curr == adj[curr][i]) return true;
            parent[adj[curr][i]] = curr;
            if(vis[adj[curr][i]] == true && adj[curr][i] != parent[curr]) return true;
            if(vis[adj[curr][i]] == false){
                vis[adj[curr][i]] = true;
                q.push(adj[curr][i]);
            }
        }
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   for(int i =0; i<V; i++){
       bool vis[V] = {false};
       if(bfs(i, adj, vis, V)) return true;
   }
   return false;
}
int main(){
int T;
cin>>T;
while(T--){
int V,E;
cin>>V>>E;
vector<int>adj[V];
int u,v;
for(int i=0;i<E;i++){
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}
cout<<isCycle(adj,V)<<"\n";
}
}
