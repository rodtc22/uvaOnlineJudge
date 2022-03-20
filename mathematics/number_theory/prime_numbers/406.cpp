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

vector<int>prime;
bool mark[N]={};

void sieve(){
    mark[0] = mark[1] = 0;
    prime.push_back(1);
    for(int i=2 ;i*i < N; i++){
        if(mark[i]) continue;
        for(int j= i<<1; j <N ;j+=i)
            mark[j] = 1;
    }
}

int main(){
    sieve();
    int n,k;
    while(cin>>n>>k){
        int pos = prime.back()+1;
        while(prime.back() < n){
            if(!mark[pos]) prime.push_back(pos);
            pos++;
        }
        while(prime.back()>n) prime.pop_back();

        int m = (prime.size()-1)>>1;

        cout<<n<<" "<<k<<":";
        for(int i= max(0,m-k+1) ; i < min(int(prime.size()),m+k+(prime.size()%2==0));i++) cout<<" "<<prime[i];cout<<endl;
        cout<<endl;        
    }
    return 0;
}