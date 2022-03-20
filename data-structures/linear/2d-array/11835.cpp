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
	int g,p,s,x;
	int place[200][200];
	int pos[200][200];
	int points[200];
	while(scanf("%d %d",&g,&p)==2,(g or p)){
		for(int i= 0 ;i <g; i++)
			for(int j= 1 ;j<= p ;j++)
				scanf("%d",&place[i][j]);
		scanf("%d",&s);
		for(int i= 0 ;i< s;i++){
			scanf("%d",&pos[i][0]);
			for(int j = 1 ;j<= pos[i][0];j++)
				scanf("%d",&pos[i][j]);
		}
		vector<int>ans;
		for(int i = 0 ;i< s; i++){
			memset(points,0,sizeof points);
			ans.clear();
			for(int j= 1; j<= p ;j++){
				int sum = 0;
				for(int k= 0 ;k < g ;k++){
					if(place[k][j]<=pos[i][0]){
						sum+=(pos[i][place[k][j]]);
					}
				}
				points[j] = sum;
			}
			// cout<<i<<": ";
			// for(int j = 1 ;j<= p ;j++) cout<<points[j]<<" ";cout<<endl;
			int maxi= 1;
			for(int j = 1; j<=p ;j++)
				maxi = (points[maxi]<points[j])?j:maxi;
			for(int j = 1 ;j<=p ;j++)
				if(points[j]==points[maxi])
					ans.push_back(j);
			bool sw =0;
			for(auto x:ans){
				if(sw) printf(" ");
				printf("%d",x);
				sw = 1;
			}
			printf("\n");
		}
	}
	return 0;
}