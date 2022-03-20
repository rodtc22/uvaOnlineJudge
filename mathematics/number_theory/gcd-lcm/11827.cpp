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
    int t,x;
    cin>>t;
    cin.get();
    while(t--){
        vector<int>ar;
            
        string line;
        getline(cin,line);
        stringstream ss(line);
        while(ss>>x){
            ar.push_back(x);
        }

        int ans = 1,n = ar.size();
        for(int i= 0 ;i< n;i++)
            for(int j= i+1 ;j< n;j++)
                ans = max(ans,__gcd(ar[i],ar[j]));
        cout<<ans<<endl;
    }   
    return 0;
}