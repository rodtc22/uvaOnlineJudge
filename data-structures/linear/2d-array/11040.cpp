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
int grid[10][10];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		for(int i= 0 ;i< 9 ;i+=2)
			for(int j= 0 ;j < i+1 ;j+=2)
				scanf("%d",&grid[i][j]);
		for(int i = 0 ;i<7 ;i++){
			if(i&1) continue;
			grid[8][i+1]  = (grid[6][i]-grid[8][i]-grid[8][i+2])>>1;
		}
		for(int i = 7 ;i>0 ;i--){
			for(int j= 0 ;j < i+1 ;j++){
				grid[i][j] = grid[i+1][j]+grid[i+1][j+1];
			}
		}
		for(int i= 0; i<9 ;i++){
			for(int j = 0 ;j< i+1; j++){
				if(j>0) printf(" ");
				printf("%d",grid[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}