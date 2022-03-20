#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%*d %*d %d",&n);
		int x[n],y[n];
		for(int i= 0 ;i< n ;i++)
			scanf("%d %d",&x[i],&y[i]);
		sort(x,x+n);
		sort(y,y+n);
		printf("(Street: %d, Avenue: %d)\n",x[(n-1)>>1],y[(n-1)>>1]);
	}
	return 0;
}