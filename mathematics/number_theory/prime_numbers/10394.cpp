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

vector<ll> prime,twin;
bitset<N> is;

void sieve(){
    is.set();
    twin.clear();
    int a=-1,b=-1;

    is[0]=is[1] = false;
    for(ll i = 2; i < N; i++){
        if(!is[i]) continue;
        a = b; b = i;
        if (a!=-1){
            if(is[b-2])  twin.push_back(b);
        }
        for(ll j = i*i ;j <N ;j+=i) is[j] = false;
    }
}

int main(){
    sieve();
    int k; 
    while(scanf("%d",&k)==1){
        printf("(%lld, %lld)\n",twin[k-1]-2,twin[k-1]);
    }
    return 0;
}