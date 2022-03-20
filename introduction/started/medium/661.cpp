#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<string,int>	si;
const		int 			N = 2e5;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n,m,c,x,caso = 0;
	while(scanf("%d %d %d",&n,&m,&c)==3,n){
		//states: 0 turn-off    1: turn-on
		int cost[n];
		bool state[n]={};
		for(int i= 0 ;i< n;i++) scanf("%d",&cost[i]);
		int ans = 0;
		bool blown = 0;
		int maxi =c;
		while(m--){
			scanf("%d",&x);
			x--;
			state[x]= !state[x];
			c += cost[x]*(1 - state[x]*2); // es como el sw que haciamos en 271  (donde uno se vuelve cero y el otro uno)
			blown |= (c<0) ;
			ans = max(ans,maxi-c);
		}
		printf("Sequence %d\n",++caso);
		printf("Fuse was %sblown.\n",blown?"":"not ");
		if(!blown) printf("Maximal power consumption was %d amperes.\n",ans);
		printf("\n");
	}	
	return 0;
}