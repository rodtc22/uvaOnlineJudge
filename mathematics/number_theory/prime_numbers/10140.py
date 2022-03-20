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
const       int             N = 2e5;
const       int             M = 1e9+7;
//-------------------------------------------------------------------

//phi(x) = x/(ln(x)+1)
// 10^6 * phi(sqrt(i)) 
//phi(sqrt(i)): cantidad de nros primos hasta i
vector<int>prime;
bitset <N> is;

void sieve(){
    is.set(); //lo pone en 1's
    is[0] = is[1] = false;
    for(ll i = 2; i<N ;i++){
        if(!is[i]) continue;
        prime.push_back(i);
        for(ll j = i*i ;j<N ;j+=i) is[j] = false;
    }
}

bool is_prime(ll x){
    if(x < N ) return is[x];
    for(ll i = 0 ; i < prime.size() && prime[i]*prime[i] <= x;i++)
        if(x%prime[i]==0)
            return false;
    return true;
}

int main(){
    ll l,u;
    sieve();
    while(scanf("%lld %lld",&l,&u)==2){
        ll f,s,dife1 = oo,first = -1,second = -1,last = -1,second_last=-1,dife = 0,b=-1,a=-1;
        while(l<=u){
            if(is_prime(l)){
                second_last = last;
                last = l;
                if(last!=-1 && second_last!=-1){
                    if(dife < last-second_last){
                        dife = last-second_last;
                        a = second_last; b = last;}
                    }
                    if(dife1 > last-second_last){
                        dife1 = last-second_last;
                        f = second_last;
                        s = last;
                    }
            }
            l++;
        }
        if(last!=-1 && second_last!=-1)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",f,s,a,b);
        else
            printf("There are no adjacent primes.\n");
    }
    return 0;
}