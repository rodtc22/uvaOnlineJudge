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

struct UnionFind{
	int n,nrosets;
	vector<int> parent;

	UnionFind(int n){
		reset(n);
	}

	void reset(int nn){
		n = nn;
		nrosets = n;
		parent.assign(n+1,-1);
	}

	int find(int x){
		if(parent[x]<0) return x;
		else return parent[x] = find(parent[x]);
	}

	bool sameComponent(int u, int v){
		return find(u) == find(v);
	}


	void join(int u, int v){
		u = find(u);
		v = find(v);
		if(sameComponent(u,v)) return;
		
		//en esta ocasion, quiero que el nodo padre, sea el menor posible
		if(v < u) swap(u,v);
		
		parent[u] += parent[v];
		parent[v] = u;
		nrosets--;
	}
	void mostrar(){
		for(int i= 0 ;i<=n ;i++) cout<<i<<" "<<find(i)<<endl;
	}
};

int main(){
	int n,m;
	UnionFind uf(0);
	while(scanf("%d %d",&n,&m)==2, n || m){
		uf.reset(n);
		while(m--){
			int y; scanf("%d",&y);
			int ant; scanf("%d",&ant);
			while(--y){
				int x; scanf("%d",&x);
				uf.join(x,ant);
			}
		}
		printf("%d\n",-uf.parent[0]);
	}
	return 0;
}