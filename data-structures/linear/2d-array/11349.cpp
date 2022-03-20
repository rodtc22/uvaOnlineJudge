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

// for(int i= 0 ;i< n;i++){for(int j= 0 ;j< n;j++) printf("%lld ",grid[i][j]); printf("\n"); }

int main(){
	int cases;
	ll grid[102][102];
	scanf("%d",&cases);
	for(int c = 1 ;c<=cases ;c++){
		bool sw = 1;
		int n;
		scanf("%*s %*s %d",&n);
		for(int i= 0 ;i< n ;i++)
			for(int j= 0 ;j< n;j++)
				scanf("%lld",&grid[i][j]);
		for(int i = 0 ;i< n;i++)
			for(int j= 0 ;j < n;j++)
				sw &= (grid[i][j]==grid[n-i-1][n-j-1] and grid[i][j]>=0);
		printf("Test #%d: %s.\n",c,sw?"Symmetric":"Non-symmetric");
	}
	return 0;
}