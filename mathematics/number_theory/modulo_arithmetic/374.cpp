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
const       int             N = 2e6+1;
const       int             M = 1e9+7;
//-------------------------------------------------------------------

//resolver la congruencia  r := b^p mod m

ll exp_mod(int b, int p, int m){
    ll ans = 1, val = b;
    while(p){
        if(p&1) ans = (ans * val)%m;
        val = val * val %m;
        p = p >> 1;
    }
    return ans;
}

int main(){
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)==3){
        printf("%lld\n",exp_mod(b,p,m));
    }
    return 0;
}