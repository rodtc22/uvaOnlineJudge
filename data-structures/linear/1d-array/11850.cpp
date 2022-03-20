#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 100005;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n,x;
	bitset<2000> station;
	while(scanf("%d",&n)==1,n){
		//pone todo en cero
		station.reset();
		for(int i= 0 ;i< n;i++)
			scanf("%d",&x),station[x]=1;
		int i= 0 ;
		int gas = 0;
		int pos = 0;
		while(i<1422){
			if(station[i]) gas = 200,pos =i;
			i++;
			gas--;
			if(gas<0) break;
		}
		printf("%s\n",(i-pos<=gas)?"POSSIBLE":"IMPOSSIBLE");
	}
	return 0;
}