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

int limit = 5000000;

int main(){
	int t; scanf("%d",&t);
	while(t){
		vector<int> ar;
		int x;
		while(scanf("%d",&x),x)
			ar.push_back(x);
		sort(ar.rbegin(),ar.rend());
		ll ans = 0;
		for(int i= 0 ;i< ar.size();i++)
			ans += (1LL*powl(ar[i],i+1)*2);
		if(ans > limit) printf("Too expensive\n");
		else printf("%lld\n",ans);
		t--;
	}
	return 0;
}