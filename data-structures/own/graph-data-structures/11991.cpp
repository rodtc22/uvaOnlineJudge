#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n,m,x,a,b;
	vector<vector<int>> oc; //lista de las ocurrencias de los indices
	while(scanf("%d %d",&n,&m)==2){
		oc.assign(1e6,vector<int>());
		for(int i = 1 ;i <= n;i++){
			scanf("%d",&x);
			oc[x-1].push_back(i);
		}

		while(m--){
			scanf("%d %d",&a,&b);
			int ans = 0;
			if(oc[b-1].size() >= a){
				ans = oc[b-1][a-1];
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}