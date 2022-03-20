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


int main(){
	int n ; 
	while(scanf("%d",&n),n){
		int tam = 31 - __builtin_clz(n);

		int a= 0, b = 0;
		int one = __builtin_popcount(n);

		for(int i= tam  ;i>= 0 ;i--){
			a <<= 1; b <<= 1;
			if(n & (1<<i)){
				(one&1)? a++:b++;
				one--;
			}
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}