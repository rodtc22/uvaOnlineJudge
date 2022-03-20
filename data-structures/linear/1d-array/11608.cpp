#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 100005;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int nro,cases= 1;
	int done[12],need[12];
	while(scanf("%d",&nro)==1,nro>=0){
		for(int i = 0 ;i< 12 ;i++) scanf("%d",&done[i]);
		for(int i= 0 ;i<12 ;i++) scanf("%d",&need[i]);
		printf("Case %d:\n",cases++);
		for(int i= 0 ;i<12;i++){
			printf("No problem%s\n",(nro>=need[i]?"! :D":". :("));
			if(nro>=need[i]) nro -= need[i];
			nro+=done[i];
		}
	}
	return 0;	
}