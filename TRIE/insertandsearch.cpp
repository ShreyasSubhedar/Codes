/*
INPUT
3
8
the a there answer any by bye their
the
3
the one and only
only
1
ohk
o

OUTPUT
1
1
0
*/









#define lli long long int 
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define mk make_pair
#define pb push_back
#define eps 1e-12
#define sd(x) scanf("%d",&x)
#define sdl(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define pdl(x) printf("%lld\n",x)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
using namespace std;
struct TrieNode 
{ 
    struct TrieNode *child[26]; 
    bool isEnd; 
};
struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode =  new TrieNode; 
    pNode->isEnd = false; 
    for (int i=0;i<26; i++) 
        pNode->child[i]=NULL; 
    return pNode; 
} 
void insert(struct TrieNode *root, string key) 
{ 
    struct TrieNode *curr = root; 
    for (int i = 0; i < key.length(); i++){ 
        int index = key[i] - 97; 
        if (curr->child[index]==NULL) 
            curr->child[index]= getNode(); 
        curr= curr->child[index]; 
    }
    curr->isEnd=true; 
} 
bool search(struct TrieNode *root, string key) 
{ 
    struct TrieNode *curr=root; 
    for (int i=0;i<key.length();i++) { 
        int index = key[i] - 97; 
        if (curr->child[index]==NULL) 
            return false; 
        curr=curr->child[index]; 
    } 
  
    return (curr!=NULL&& curr->isEnd); 
} 

int main()
{
ios::sync_with_stdio(false); cin.tie(NULL);
   int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
TrieNode *root= getNode();
string s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
    insert(root,s[i]);
}
string p;
cin>>p;
cout<<search(root,p)<<endl; 
    
}
return 0;
}
