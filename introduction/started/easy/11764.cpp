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
	int t,high,low,n,x,bef;
	scanf("%d",&t);
	for(int k= 1 ;k<=t; k++){
		high = low = 0;
		bef = -1;
		scanf("%d",&n);
		for(int i= 1 ;i<=n; i++){
			scanf("%d",&x);
			if(bef!=-1){
				if(x>bef) high++;
				else if(x<bef) low++;
			}
			bef = x;
		}
		printf("Case %d: %d %d\n",k,high,low);
	}
	return 0;
}