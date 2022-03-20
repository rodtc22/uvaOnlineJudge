#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define	print(x)	{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define	index(n)	{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define	all(x)	x.begin(),x.end() 
typedef	long long 		ll;
typedef	pair<int,char>	ii;
const		int 	N = 502;
const		int 	M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int t;
	while(scanf("%d",&t)==1){
		for(int i= 1 ;i<= t; i++){
			int n; scanf("%d",&n);
			int x,ans = 1;
			while(n--){
				scanf("%d",&x);
				ans = max(ans,x);
			}
			printf("Case %d: %d\n",i,ans);
		}
	}
	return 0;
}