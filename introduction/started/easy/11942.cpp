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
	int n;
	scanf("%d",&n);
	printf("Lumberjacks:\n");
	while(n--){
		int x,ant = -1;
		bool asc=1,desc= 1;
		for(int i= 0 ;i<10 ;i++){
			scanf("%d",&x);
			if(ant != -1){
				if(x>ant) desc = 0;
				else asc = 0;
			}
			ant =x;
		}
		if(asc or desc) printf("Ordered\n");
		else printf("Unordered\n");
	}
	return 0;
}