#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 1e6+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n,m;
	while(scanf("%d %d",&n,&m),(n || m)){
		bitset<N> ini,fin; //lo crea en ceros

		bool ok = 1;
		int a,b,k;
		while(n--){
			scanf("%d %d",&a,&b);
			
			if(!ok) continue;

			for(int i= a;ok && i<=b ;i++){
				if(i==a){
					(ini[i])? ok = 0 : ini[i] = 1;
				}else if(i == b){
					(fin[i])? ok = 0 : fin[i] = 1;
				}else{
					(ini[i])? ok = 0 : ini[i] = 1;
					(fin[i])? ok = 0 : fin[i] = 1;
				}
			}
		}
		while(m--){
			scanf("%d %d %d",&a,&b,&k);
			
			if(!ok) continue;
			
			bool ok2 = 1;
			for(int j = 0 ; ok2 && ok ; j+=k){
				
				for(int i = j+a;ok && i<=j+b ;i++){
					if(i>1e6){
						ok2 = 0;
						break;
					}

					if(i==j+a){
						(ini[i])? ok = 0 : ini[i] = 1;
					}else if(i == j+b){
						(fin[i])? ok = 0 : fin[i] = 1;
					}else{
						(ini[i])? ok = 0 : ini[i] = 1;
						(fin[i])? ok = 0 : fin[i] = 1;
					}
				}
			}
			
		}

		printf("%sCONFLICT\n",ok? "NO ":"");
	}
	return 0;
}