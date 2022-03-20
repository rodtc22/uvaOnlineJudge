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

ll nro;
vector<int> digits;

void to_vec(ll x){
    digits.clear();
    while(x){
        digits.push_back(x%10);
        x /= 10;
    }
    reverse(ALL(digits));
}


int main(){
    while(cin>>nro){
        to_vec(nro);
        PRINT(digits);
    }
    return 0;
}