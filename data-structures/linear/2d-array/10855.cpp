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

int n,m;
char a[102][102],b[102][102];
int cero, der, inv ,izq;

int main(){
	while(cin>>n>>m,(n or m)){
		for(int i= 0 ;i< n;i++) for(int j= 0 ;j< n ;j++) cin>>a[i][j];
		for(int i = 0 ;i< m ;i++) for(int j= 0 ;j< m ;j++) cin>>b[i][j];
		cero = der = inv = izq = 0;
		for(int i= 0  ;i< n-m+1;i++){
			for(int j= 0 ;j< n-m+1 ;j++){
				bool sw = 1;
				for(int  y= 0 ;y < m; y++) 
					for(int x = 0 ;x < m; x++) 
						sw &= (b[y][x] == a[i+y][j+x]);
				cero += sw;
				
				sw = 1;
				for(int x= 0 ; x< m ; x++)
					for(int y = 0;y < m ; y++)
						sw&=(b[m-y-1][x]==a[i+x][j+y]);
				der += sw;

				sw = 1; 
				for(int y= 0 ;y < m ;y++)
					for(int x =0 ;x < m;x++)
						sw &= (b[m-y-1][m-x-1]==a[i+y][j+x]);
				inv += sw;
				
				sw = 1;
				for(int x= 0 ;x < m ; x++)
					for(int y = 0 ; y < m ;y++)
						sw &= (b[y][m-x-1] == a[i+x][j+y]);
				izq += sw;
			}
		}
		cout<<cero<<" "<<der<<" "<<inv<<" "<<izq<<'\n';
	}
	return 0;
}