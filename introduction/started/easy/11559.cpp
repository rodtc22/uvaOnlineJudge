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
	int nro,budget,hotel,week;
	while(scanf("%d %d %d %d",&nro,&budget,&hotel,&week)==4){
		int price,ans= 2e9,bed;
		while(hotel--){
			scanf("%d",&price);
			for(int i= 0 ;i< week ;i++){
				scanf("%d",&bed);
				if(bed<nro) continue;
				if(price*nro > budget) continue;
				ans = min(ans,price*nro);
			}
		}
		if(ans==2e9) printf("stay home\n");
		else printf("%d\n",ans);
	}
	return 0;
}