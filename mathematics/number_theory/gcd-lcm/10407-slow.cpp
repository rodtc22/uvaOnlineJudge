#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define     LINE            {cout<<"-------------------------------------"<<endl;}
#define     PRINT(x)        {for(auto d:x) cout<<d<<" ";cout<<endl;}
#define     INDEX(n)        {for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define     ALL(x)          x.begin(),x.end() 
#define     RALL(x)         x.rbegin(),x.rend() 
typedef     long long       ll;
typedef     pair<int,int>   pi;
typedef     pair<ll,ll>     pl;
const       ll              oo = 9e18;
const       int             N = 2e7+1;
const       int             M = 1e9+7;
//-------------------------------------------------------------------

ll modu(ll x,ll mod) {return ((x%mod)+mod)%mod; }

int main(){
    vector<int> ar;
    int n,x;
    while(true){
        ar.clear();
        while(cin>>x,x) ar.push_back(x);
        if(ar.empty()) break;

        int g = abs(ar[0]-ar[1]);
        ll ans = 1;
        for(ll d = 1; d * d<= g ;d++){
            if(g%d!=0) continue;

            int r = modu(ar[0],d);
            bool ok = 1;
            for(auto x : ar)
                if(modu(x,d) != r) 
                    ok = 0;
            if(ok) ans = max(ans,d);

            r = modu(ar[0],g/d);
            ok = 1;
            for(auto x : ar)
                if(modu(x,g/d) != r) 
                    ok = 0;
            if(ok) ans = max(ans,g/d);
        }
        cout<<ans<<endl;
        // for(auto x:ar) cout<<modu(x,ans)<<" ";cout<<endl;
    }
    return 0;
}