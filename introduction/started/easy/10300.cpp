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
	int  n;
	while(scanf("%d",&n)==1){
		while(n--){
			int farmers;
			ll size,animals,friendly;
			scanf("%d",&farmers);
			double suma  = 0;
			for(int i= 0 ;i< farmers; i++){
				scanf("%lld %lld %lld",&size,&animals,&friendly);
				suma+=(1.0*size/animals * friendly*animals);
			}	
			printf("%lld\n",ll(ceill(suma)));
		}
	}
	return 0;	
}
// farmyard
// animals

//degree > 0

//mount received  =  average * enviorment-friendly

//final = mount-received * number_animal
