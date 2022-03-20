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

//de hecho , cuando tengo que usar .count()
//es mucho mejor usar un map

int main(){
	int t,n,m,x; 
	multiset<int> a,b;
	
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %d",&n,&m);
		a.clear();b.clear();

		for(int i= 0 ;i< n;i++){
			scanf("%d",&x);
			a.insert(x);
		}
		for(int i= 0 ;i< m ;i++){
			scanf("%d",&x);
			b.insert(x);
		}

		int ans = 0;
		while(a.size() && b.size()){
			x = *a.begin();
			int ca = a.count(x);
			int cb = b.count(x);

			ans += abs(ca-cb);
			a.erase(x); b.erase(x);
		}
		ans += (a.size() + b.size());

		printf("%d\n",ans);
	}
	return 0;
}