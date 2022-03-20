#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	vector<int> ar;
	int x,n=0;
	while(scanf("%d",&x)==1){
		ar.push_back(x);
		n++;
		sort(ar.begin(),ar.end());
		if(n&1){
			printf("%d\n",ar[n>>1]);
		}else{
			ll ac = 0LL + ar[(n-1)>>1] + ar[n>>1];
			printf("%lld\n",ac>>1);
		}
	}
	return 0;
}