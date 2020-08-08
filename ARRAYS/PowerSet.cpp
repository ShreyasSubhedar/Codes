#include <bits/stdc++.h>
#define lli int 
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
int main()
{
ios::sync_with_stdio(false); cin.tie(NULL);
lli T;
cin>>T;
while(T--){
    lli N;
    cin>>N;
    string S;
    cin>>S;
    unsigned int pow_set_size = pow(2, N); 
    int counter, j; 
    vector<string>V;
      for(counter = 0; counter < pow_set_size; counter++) 
    { 
        string s="";
    for(j = 0; j < N; j++) 
    { 
        if(counter & (1 << j)) 
            s+=S[j]; 
    }
    if(s.length()!=0)
    V.pb(s);
    }
    sort(V.begin(),V.end());
    for(auto i: V)
    cout<<i<<" ";
    cout<<"\n";
}
return 0;
}