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

int dx[] = {-1,1,0,0}; //izq-der
int dy[] = {0,0,-1,1}; //arr-aba

int main(){
	int n,r,c,k;
	int grid[102][102];
	bool stat[102][102];
	while(scanf("%d %d %d %d ",&n,&r,&c,&k)==3, n){
		for(int i = 1; i <= r ;i++)
			for(int j= 1; j<=c ;j++)
				scanf("%d",&grid[i][j]);
		while(k--){
			memset(stat,0,sizeof stat);
			for(int i= 1; i<=r ;i++){
				for(int j= 1; j<=c ;j++){
					for(int k = 0 ;k<4;k++){
						if((grid[i][j]+1)%n==grid[i+dy[k]][j+dx[k]]){
							stat[i+dy[k]][j+dx[k]] = 1;
						}
					}
				}
			}
			for(int i= 1; i<=r ;i++){
				for(int j= 1; j<=c ;j++){
					if(!stat[i][j]) continue;
					grid[i][j] = (grid[i][j]-1+n)%n;
				}
			}
		}
		for(int i= 1; i<=r ;i++){
			for(int j= 1; j<=c ;j++){
				if(j>1) printf(" ");		
				printf("%d",grid[i][j]);
			}
			printf("\n");
		}	
	}
	return 0;
}