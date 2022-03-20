#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 5e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

//USING LAMBDA FUNCTIONS

ll m; // el mulo tiene que ser una variable global
int main(){
	ll n;
	while(cin>>n>>m,n,m){

		vector<ll> ar(n);
		for(ll &d:ar) cin>>d;

		// el comparador dice 
		// return 1      ->     a,b
		// return 0      ->     b,a
		if(n>1){
			sort(ar.begin(),ar.end(),[](int a, int b){
				int ma = a%m, mb =b%m;
				
				//si son modulos distintos
				if(ma != mb) return ma < mb;

				//si tienen distinta paridad
				if(a&1 ^ b&1) return bool(a&1);
				
				// si ambos son impares
				if(a&1 && b&1) return a>b;
				
				//entonces ambos son pares
				return a<b;
			});
		}

		// ((ar[i]%m)+m)%m
		cout<<n<<" "<<m<<endl;
		for(int i= 0 ;i< n;i++) cout<<ar[i]<<endl;
	}
cout<<"0 0\n";
	return 0;
}