#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n,m,x;
	while(scanf("%d %d",&n,&m), n||m){
		int sum = n+m;
		set<int> cd;

		while(n--){
			scanf("%d",&x);
			cd.insert(x);
		}
		while(m--){
			scanf("%d",&x);
			cd.insert(x);
		}
		printf("%d\n",sum-int(cd.size()));
	}
	return 0;
}