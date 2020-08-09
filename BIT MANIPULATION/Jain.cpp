#include <bits/stdc++.h>
#define lli unsigned int 
#define pll pair<lli,lli>
#define pil pair<int,lli>
#define pli pair<lli,int>
#define pii pair<int,int>
#define mk make_pair
#define pb push_back 
#define eps 1e-12
#define sd(x) scanf("%d",&x)
#define sdl(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define pdl(x) printf("%lld\n",x)
#define MAXN 
#define debug(variable) cout<<#variable<<" = "<<variable<<"\n"
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
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
  lli arr[32];
  for(lli i=0;i<32;i++)
  arr[i]=0;
  for(lli i=0;i<N;i++){
    string S;
    cin>>S;
    lli mask=0;
    for(lli i=0;i<S.length();i++){
      if(S[i]=='a') mask|=(1<<0);
      if(S[i]=='e') mask|=(1<<1);
      if(S[i]=='i') mask|=(1<<2);
      if(S[i]=='o') mask|=(1<<3);
      if(S[i]=='u') mask|=(1<<4);
    }
    arr[mask]++;
  }

 	long long int res = 0;
		for(int i=1;i<32;i++){
			for(int j=i+1;j<32;j++){
				if((i | j) == 31){
					res = res + arr[i] * arr[j];
				}
			}
		}
  res+=(arr[31]*(arr[31]-1))/2;
  cout<<res<<"\n";
}

return 0;
}