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
const       int             N = 2e5+5;
const       int             M = 1e9+7;
//-------------------------------------------------------------------

vector<ll> primos;
vector<bool> is;

int main(){
    int n; cin>>n;
    is.resize(n+1,0);

    for(ll i= 2; i <= n ;i++){
        if(is[i]) continue;
        primos.push_back(i);
        for(ll j = i*i ; j<=n ;j+=i) is[j] = 1;
    }
    ll maxi = 0;
    for(int i= 1 ;i< primos.size(); i++) maxi = max(maxi,primos[i]-primos[i-1]);
        cout<<maxi<<endl;
    return 0;
}