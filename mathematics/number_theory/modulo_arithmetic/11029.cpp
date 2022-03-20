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

//long double almacena muuuuuuuuuuuuuucho mas que long

//de donde sacamos la formula para fist?
/*n^k = 10 ^ (log10(n^k))
n^k = 10 ^ (k*log10(n))*/

long double first(int b, int p, int m){
    long double k_log_n  = double(p) * log10(b);

    //obtenemos solo los decimales: 1.2345 - 1.0000 --> 0.2345
    long double decimal_part_k_log_n  = k_log_n - floor(k_log_n);

    //lo que hace es que me lo deja a solo 1 decimal
    long double decimal_part = pow(10.0, decimal_part_k_log_n);
    return decimal_part*100;
}

int last(int b, int p, int m){
    ll ans = 1, val = b;
    while(p){
        if(p&1) ans = (ans * val)%m;
        val = val * val %m;
        p = p >> 1;
    }
    return ans;
}

int main(){
    int t;
    scanf("%d",&t);    
    while(t--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        int izq = first(n,k,1000);
        int der = last(n,k,1000);
        printf("%d...%03d\n",izq,der); //poner %03, rellena a con cero, porque tiene que haber 3 digitos
        // cout<<fixed<<izq<<" "<<der<<endl;
    }
    return 0;
}