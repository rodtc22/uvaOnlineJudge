#include <iostream>
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

//ax + by = g
ll x, y, g;
void ext_gcd(ll a, ll b){
    if(b == 0){
        x = 1; y = 0; g = a;
        return ;
    }
    ext_gcd(b,a%b);
    ll x1 = x, y1 = y;
    x = y1;
    y = x1 - y1*(a/b);
}

int main(){
    ll a, b;
    while(cin>>a>>b){
        ext_gcd(a,b);
        cout<<x<<" "<<y<<" "<<g<<endl;
    }
    return 0;
}