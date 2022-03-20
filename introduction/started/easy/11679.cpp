#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define	print(x)	{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define	index(n)	{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define	all(x)	x.begin(),x.end() 
typedef	long long 		ll;
typedef	pair<int,char>	ii;
const		int 	N = 502;
const		int 	M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int nbank,ndeb;
	while(scanf("%d %d",&nbank,&ndeb)==2,(nbank or ndeb)){
		int reserve[nbank+1]={},debenture[nbank+1]={};
		for(int i = 1 ;i<=nbank ;i++) scanf("%d",&reserve[i]);
		int a,b,c;
		while(ndeb--){
			scanf("%d %d %d",&a,&b,&c);
			reserve[a]-=c;
			reserve[b]+=c;
		}
		char ans = 'S';
		for(int i =1;i<=nbank ;i++)
			if(reserve[i]<0)
				ans = 'N';
		printf("%c\n",ans);

	}
	return 0;
}