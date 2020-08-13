#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 1000000000000
int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
lli T;
cin>>T;
while(T--) {
    lli N;
    cin>>N;
    lli o;
    vector<lli>maxBit(32,0) , minBit(32,INF);
    while(N--)
    {
        cin>>o;
        lli len = (int)log2(o)+1;
        maxBit[len] = max(maxBit[len] , o);
        minBit[len] = min(minBit[len] , o);
    }
    lli ans = -1;
    for(lli i=1;i<32;i++){
        for(lli j=1;j<32;j++){
            lli X = maxBit[i];
            lli Y = minBit[j];
            if(X==0 or Y==INF)
                continue;
            else{
              lli diff = (X * ((1<<j)-1)) - (Y * ((1<<i)-1));
              ans = max(ans,diff);
                }
            
        }
    }
    
    cout<<ans<<"\n";
    
    
  }
return 0;
}