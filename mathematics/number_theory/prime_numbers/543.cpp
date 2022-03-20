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
const       int             N = 1e6+6;
const       int             M = 1e9+7;
//-------------------------------------------------------------------

vector<int> prime;
bitset<N> mark;

void sieve(){
    mark[0] = mark[1] = 1;
    for(ll i = 2; i < N ;i++){
        if(mark[i]) continue;
        prime.push_back(i);
        for(ll j = i*i ;j<N ;j+=i) mark[j] = 1;
    }
}

int main(){
    sieve();
    int x;
    while(cin>>x,x){
        bool sw = false;
        int val = -1;
        for(auto c: prime){
            if(c>=x || sw) break; 
            if(!mark[x-c]){
                val = c;
                sw = true;
            }
        }
        if(sw){
            cout<<x<< " = "<<val <<" + "<<x-val<<endl;
        }else{
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }
    return 0;
}