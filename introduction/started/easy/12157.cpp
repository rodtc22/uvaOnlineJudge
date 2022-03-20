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
	int t,n,x;
	scanf("%d",&t);
	for(int k = 1 ;k<=t ;k++){
		scanf("%d",&n);
		int mile = 0, juice = 0;
		for(int i= 0 ;i< n;i++){
			scanf("%d",&x);
			mile += ((x/30 + 1)*10);
			juice += ((x/60 + 1)*15);
		}
		printf("Case %d: ",k);
		if(mile<juice) printf("Mile %d\n",mile);
		else if(mile==juice) printf("Mile Juice %d\n",mile);
		else printf("Juice %d\n",juice);
	}
	return 0;
}