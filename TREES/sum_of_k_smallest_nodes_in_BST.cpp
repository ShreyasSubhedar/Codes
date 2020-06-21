#include <bits/stdc++.h>
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
int main()
{
ios::sync_with_stdio(false); cin.tie(NULL);
lli T;
cin>>T;
while(T--){
    lli N;
    cin>>N;
    set<lli>V;
    lli o;
    for(lli i=0;i<N;i++){
        cin>>o;
        V.insert(o);
    }
    lli p;
    cin>>p;
    o=0;
    for(auto i:V){
        if(p==0)
        break;
        o+=i;
        p--;
    }
    cout<<o<<"\n";
}
return 0;
}
