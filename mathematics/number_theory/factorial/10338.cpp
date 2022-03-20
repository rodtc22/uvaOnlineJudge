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

int main(){
    int t; cin>>t;
    string s;

    vector<ll> F={1};
    for(int i= 1; i<=20 ;i++) F.push_back(F[i-1]*i);

    for(int ii = 1;ii <= t;ii++){
        cin>>s;

        int ar[26]={};
        for(char c:s) ar[c-'A']++;

        ll ans = F[s.size()];
        for(int i= 0 ;i< 26; i++) ans /= F[ar[i]];

        cout<<"Data set "<<ii<<": "<<ans<<endl;

    }
    return 0;
}