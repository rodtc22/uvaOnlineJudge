#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1000006;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int caso;
	int player,obj,die;
	int pos[N];
	int sol[N]; // snake or ladder
	scanf("%d",&caso);
	while(caso--){
		scanf("%d %d %d",&player,&obj,&die);
		for(int i=0 ;i<= player ; i++) pos[i]=1;
		memset(sol,-1,sizeof sol);
		while(obj--){
			int p,po;
			scanf("%d %d",&p,&po);
			sol[p] = po;
		}
		bool sw = 0;
		int d,p = 0;
		while(die--){
			scanf("%d",&d);
			if(sw) continue;
			
			pos[p]+=d;
			if(sol[pos[p]]!=-1) pos[p] = sol[pos[p]];
			
			if(pos[p]>=100) pos[p] = 100;

			sw |= (pos[p]==100);
			p = (p +1 )%player;
		}
		for(int i=0 ;i<player;i++)
			printf("Position of player %d is %d.\n",i+1,pos[i]);
	}
	return 0;
}