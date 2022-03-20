#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main()
{
	int n,m;
	while(scanf("%d %d",&m,&n)==2)
	{
		vector<vector<pi>> adj(n,vector<pi>());
		
		for(int i = 0 ; i< m ;i++)
		{
			int nodes; scanf("%d",&nodes);
			int pos[nodes];
			for(int j = 0 ;j < nodes; j++)
				scanf("%d",&pos[j]);
			for(int j= 0 ;j< nodes; j++)
			{
				int x; scanf("%d",&x);
				adj[pos[j]-1].push_back({x,i});
			}
		}
	
		printf("%d %d\n",n,m);
		for(int i= 0 ;i< n; i++){
			printf("%ld",adj[i].size());
			
			for(int j= 0 ;j < adj[i].size();j++)
				printf(" %d",adj[i][j].second+1);
			printf("\n");
			
			for(int j= 0 ;j < adj[i].size();j++)
			{
				if(j>0) printf(" ");
				printf("%d",adj[i][j].first);
			}
			printf("\n");	
		}
	}
	return 0;
}