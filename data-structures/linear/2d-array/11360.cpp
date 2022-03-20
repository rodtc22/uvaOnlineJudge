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
	int t;
	cin>>t;
	for(int z= 1 ;z<=t;z++){
		int n;
		cin>>n;
		char grid[20][20];
		for(int i= 1; i<=n; i++)
			for(int j= 1 ;j<=n ;j++)
				cin>>grid[i][j];
		int q,a,b;
		string key;
		cin>>q;
		while(q--){
			cin>>key;
			if(key=="row"){
				cin>>a>>b;
				for(int j = 1 ;j<=n ;j++)
					swap(grid[a][j],grid[b][j]);
			}else if(key=="col"){
				cin>>a>>b;
				for(int i= 1 ;i<=n ;i++)
					swap(grid[i][a],grid[i][b]);
			}else if(key=="inc"){
				for(int i= 1 ;i<=n ;i++)
					for(int j= 1 ;j<=n ;j++)
						grid[i][j] = (((grid[i][j]-'0')+1)%10)+'0';
			}else if(key=="dec"){
				for(int i= 1 ;i<=n ;i++)
					for(int j= 1 ;j<=n ;j++)
						grid[i][j] = (((grid[i][j]-'0')-1+10)%10)+'0';
			}else if(key=="transpose"){
				for(int i= 1 ;i<=n ;i++){
					for(int j = 1; j<=i ;j++){
						swap(grid[i][j],grid[j][i]);
					}
				}
			}
		}
		cout<<"Case #"<<z<<'\n';
		for(int i= 1; i<=n ;i++){
			for(int j= 1 ;j<=n ;j++) cout<<grid[i][j];
			cout<<'\n';
		}
		cout<<'\n';
	}
	return 0;
}