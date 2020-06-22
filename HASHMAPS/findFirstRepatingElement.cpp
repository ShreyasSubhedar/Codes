#include<bits/stdc++.h>
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
ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
lli t;
cin>>t;
while(t--){
    lli n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>m;
    for(lli i=0;i<n;i++){
    cin>>arr[i];
    m[arr[i]]++;}
    bool b=false;
    for(lli i=0;i<n;i++)
    {
        if(m[arr[i]]>=2){
            b=true;
        cout<<i+1<<"\n";
        break;
        }
    }
    if(b==false)
    cout<<"-1\n";
}
return 0;
}