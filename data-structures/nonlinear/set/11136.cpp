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
	int n;
	while(scanf("%d",&n), n){
		ll ac = 0;
		multiset <int> bill;
		while(n--){
			int m,x; scanf("%d",&m);
			while(m--){
				scanf("%d",&x);
				bill.insert(x);
			}
			int a = *bill.begin();
			int b = *(--bill.end());
			
			bill.erase(bill.begin());
			bill.erase(--bill.end());

			ac += (b-a);
		}
		printf("%lld\n",ac);
	}
	return 0;
}