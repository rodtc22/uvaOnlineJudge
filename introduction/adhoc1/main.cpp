#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n,m;
	int ar[N];
	while(scanf("%d %d",&n,&m)==2,n){
		for(int i= 0 ;i< m;i++) scanf("%d",&ar[i]);
		ar[m] = n;
		int pos = 0;
		int ans = 0;
		for(int i= 0 ;i<m ;i++){
			if(ar[i]>=ar[i+1]){
				ans+=(ar[i]-ar[pos]);
				pos = i+1;
			}
		}
		ans+=(ar[m]-ar[pos]);
		printf("%d\n",ans);
	}
	return 0;
}