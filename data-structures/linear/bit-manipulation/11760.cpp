#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int d_i[] = {-1,0,1,0};
int d_j[] = {0,1,0,-1};

#define valid(x,a,b) (a<= x && x <= b)

int main(){
	int r,c,n,i,j;
	int caso = 1;
	while(scanf("%d %d %d",&r,&c,&n),(r&&c&&n)){
		bitset<N> x,y;
		while(n--){
			scanf("%d %d",&i,&j);
			y[i] = x[j] = 1;
		}
		scanf("%d %d",&i,&j);

		bool ok = 0;
		ok |= (!x[j] && !y[i]) ;

		for(int k= 0 ;k <4 ;k++){
			if(valid(j+d_j[k],0,c-1) && valid(i+d_i[k],0,r-1))
				ok |= (!x[j+d_j[k]] && !y[i+d_i[k]]) ;
		}

		if(ok) printf("Case %d: Escaped again! More 2D grid problems!\n",caso++);
		else printf("Case %d: Party time! Let's find a restaurant!\n",caso++);
	}
	return 0;
}