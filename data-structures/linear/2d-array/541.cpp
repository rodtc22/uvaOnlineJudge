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
	int n,m=102;
	int grid[m][m];
	int row[m],column[m];
	while(scanf("%d",&n),n){
		memset(row,0,sizeof row);
		memset(column,0,sizeof column);
		for(int i= 0 ;i< n;i++)
			for(int j= 0 ;j < n; j++){
				scanf("%d",&grid[i][j]);
				column[j]+=grid[i][j];
				row[i]+=grid[i][j];
			}
		int x = -1, y =-1;
		int contx = 0, conty = 0;
		for(int i= 0 ;i< n ;i++){
			if(row[i]&1){
				x = i;
				contx++;
			}
		}
		for(int i= 0 ;i< n ;i++){
			if(column[i]&1){
				y = i;
				conty++;
			}
		}
		if(contx==0 and conty ==0){
			printf("OK\n");
		}else if(contx ==1 and conty ==1){
			printf("Change bit (%d,%d)\n",x+1,y+1);
		}else{
			printf("Corrupt\n");
		}
	}
	return 0;
}