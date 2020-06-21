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
     lli K;
    cin>>K;
    unordered_map<lli,lli>M;
    for(lli i=0,o;i<N;i++){
        cin>>o;
        M[o]++;
    }
    priority_queue<lli>Q;
for(auto a:M){
    Q.push(a.second);       // inserting count of each number into MAX HEAP
   //cout<<a.first<<"  "<<a.second<<"\n";
}
while(K>0||Q.size()!=0){   
    if(K<=0)
    break;
    lli max=Q.top();
    Q.pop();
    if(max>1){
        K=K-max+1;
    Q.push(1);
    
      if(K<=0)
    break;
    }
    else if(max==1){
        K--;
         if(K<=0)
    break;
    }
    }
if(Q.size()!=0)
cout<<Q.size()<<"\n";
else
cout<<"0\n";
}
return 0;
}
