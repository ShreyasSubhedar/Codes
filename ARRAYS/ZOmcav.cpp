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
#define MAXN 
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    cout.tie(NULL);
    lli T;
    cin>>T;
    while(T--){
        lli N;
        cin>>N;
        lli r[N+1],z[N];
        unordered_map<lli,lli>M;
        for(lli i=1;i<=N;i++)
            cin>>r[i];
            for(lli i=0;i<N;i++){
            cin>>z[i];
            M[z[i]]--;
            }
        lli rad[N+1]={0};
        for(lli i=1;i<=N;i++){
            if(i-r[i]>1)
            rad[i-r[i]]++;
            else
            rad[1]++;
            if(i+r[i]+1<=N)
            rad[i+r[i]+1]--;
        }
       
        for(lli i =2;i<=N;i++){
            rad[i]+=rad[i-1];
            M[rad[i]]++;
        }
        bool b=false;
        for(auto i=M.begin();i!=M.end();i++){
            if(i->second>0){
                b=true;
                break;
            }
        }
        if(b==false){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}