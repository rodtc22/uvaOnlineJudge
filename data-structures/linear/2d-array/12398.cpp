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

int grid[5][5];

void f(int y,int x){
	  grid[y][x] = (grid[y][x]+1)%10;
	grid[y+1][x] = (grid[y+1][x]+1)%10;
	grid[y-1][x] = (grid[y-1][x]+1)%10;
	grid[y][x+1] = (grid[y][x+1]+1)%10;
	grid[y][x-1] = (grid[y][x-1]+1)%10;
}

int main(){
	string s;
	int cases = 1;
	while(getline(cin,s)){
		memset(grid,0,sizeof grid);
		cout<<"Case #"<< cases++ <<":"<<endl;
		for(char c:s){
			if(c=='a') f(1,1);
			else if(c=='b') f(1,2);
			else if(c=='c') f(1,3);
			else if(c=='d') f(2,1);
			else if(c=='e') f(2,2);
			else if(c=='f') f(2,3);
			else if(c=='g') f(3,1);
			else if(c=='h') f(3,2);
			else if(c=='i') f(3,3);
		}
		for(int i= 1 ;i<=3 ;i++){
			for(int j= 1; j<=3 ;j++){ 
				if(j>1) cout<<" ";
				cout<<grid[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}