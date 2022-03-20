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

int n,m,k;
bool grid[502][502];

int main(){
	while(scanf("%d %d %d",&n,&m,&k)==3, (n or m or k)){
		memset(grid,0,sizeof grid);
		int a,b,c,d;
		while(k--){
			scanf("%d %d %d %d",&a,&b,&c,&d);
			if(a>c) swap(a,c);
			if(b>d) swap(b,d);
			for(int i= a ; i<=c ;i++)
				for(int j= b ; j<=d; j++)
					grid[i][j] =1;
		}
		int cont = 0;
		for(int i = 1; i<=n; i++){
			for(int j= 1; j<=m ;j++){
				cont+=(1-grid[i][j]);
			}
		}
		if(cont==0) printf("There is no empty spots.\n");
		else if(cont==1) printf("There is one empty spot.\n");
		else printf("There are %d empty spots.\n",cont);
	}
}