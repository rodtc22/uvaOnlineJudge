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
//idea: contar cuantos arcos hay por subgrafo

vector<vector<int>> tree;
vector<int> visit; //0: no hay nodo  1: hay nodo 2: nodovisitado


int edges = 0;
void dfs(int u , int ant){
	visit[u]++;
	for(auto v : tree[u]){
		if(v == ant) continue;
		edges++;
		dfs(v,u);
	}
}

int main(){
	int t; 
	char u,v;
	char buffer[50];

	scanf("%d",&t);
	while(t--){
		visit.assign(26,0);
		tree.assign(26,vector<int>());

		getchar();
		while(scanf("(%c,%c)%*c",&u,&v)==2){
			tree[u-'A'].push_back(v-'A');
			tree[v-'A'].push_back(u-'A');	
		}
		
		scanf("%*s %s",buffer);
		int n= strlen(buffer);
		for(int i= 0 ;i< n;i+=2)
			visit[buffer[i]-'A'] = 1;

		int trees = 0,acorns = 0;
		for(int i = 0 ;i< 26 ;i++){
			if(visit[i]==0 or visit[i]==2) continue;
			edges = 0;
			dfs(i,-1);
			edges ? trees++: acorns++;
		}
		printf("There are %d tree(s) and %d acorn(s).\n",trees,acorns);
	}
	return 0;
}