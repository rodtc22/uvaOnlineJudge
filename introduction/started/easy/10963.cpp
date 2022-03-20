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
	int t;
	while(scanf("%d",&t)==1){
		for(int i= 0 ;i< t ;i++){
			//solve
			int n,x1,x2;
			scanf("%d",&n);
			bool sw= 1;
			int dist = 1e9;
			while(n--){
				scanf("%d %d",&x1,&x2);
				if(dist == 1e9) dist = abs(x1-x2);
				else sw &= (dist == abs(x1-x2));
			}
			//output
			if(i>0) printf("\n");
			printf("%s\n",sw?"yes":"no");
		}
	}
	return 0;
}