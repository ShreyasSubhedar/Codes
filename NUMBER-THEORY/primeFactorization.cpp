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

vector<lli> prime(lli N){
vector<lli>V;
for(int i=2;i*i<N;i++){
    if(N%i==0){
        while(N%i==0)
        N/=i;
    V.push_back(i);
    }
    
}
if(N>1){
V.push_back(N);
V.push_back(1);
}
return V;
}
int main()
{
ios::sync_with_stdio(false); cin.tie(NULL);
lli T;
cin>>T;
while(T--){
    lli N;
    cin>>N;
    vector<lli>C;
    C=prime(N);
    cout<<*max_element(C.begin(),C.end())<<"\n";
}
return 0;
}