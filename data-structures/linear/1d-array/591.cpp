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
	int n,ac,m,cases = 0;
	int pila[51];
	while(scanf("%d",&n),n){
		ac = 0;
		for(int i= 0 ;i< n;i++){
			scanf("%d",&pila[i]);
			ac+=pila[i];
		}
		m = ac/n;
		ac =0;
		for(int i= 0 ;i<n;i++)
			ac+=abs(m-pila[i]);
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",++cases,ac>>1);
	}	
	return 0;
}