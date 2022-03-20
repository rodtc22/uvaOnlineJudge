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

// recordemos la indentidad 
// (a) equiv (b mod m)   ->    m | (a-b) 
// entonces para que ai aj tenga en mismo residuo tiene que cumplir eso
//aplicamos transitividad para obtener la relacion [(a_i) equiv (a_i+1) mod m]
//al final, me quedan todos los posibles mod, pero como quiero tomar el mayor
//entonces saco el mayor divisor entre esos, vale decir GCD

int main(){
    vector<int> ar;
    int n,x;
    while(true){
        ar.clear();
        while(cin>>x,x) ar.push_back(x);
        if(ar.empty()) break;

        int ans = abs(ar[0]-ar[1]);
        for(int i = 2; i< ar.size();i++)
            ans = __gcd(ans,abs(ar[i]-ar[i-1]));
        cout<<ans<<endl;
    }
    return 0;
}