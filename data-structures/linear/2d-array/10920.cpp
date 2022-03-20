#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

// for(int i= 0 ;i< n;i++){for(int j= 0 ;j< n;j++) printf("%lld ",grid[i][j]); printf("\n"); }
//n = 100005
int main(){
	ll n,p,i,j,x;
	while(scanf("%lld %lld",&n,&p),(n or p)){
		x = -1;
		ll y =0;
		do{
			x++;
			y = (x*2+1)*(x*2+1);
		}while(y<p and y!=p);
		j=i = ((n+1)>>1 )+x;
		if(y!=p){
			// cout<<"  NO: ";
			int cnt = x<<1;
			ll nro  = ((x-1)*2+1)*((x-1)*2+1) +1;
			ll cp = cnt-1;
			j--;
			while(cp>0 and nro!=p){
				j--;
				nro++;
				cp--;
			}
			if(nro!=p) i--,nro++;
			cp = cnt-1;
			while(cp>0 and nro!=p){
				i--;
				nro++;
				cp--;
			}
			if(nro!=p) j++,nro++;
			cp = cnt-1;
			while(cp>0 and nro!=p){
				j++;
				nro++;
				cp--;
			}
			if(nro!=p) i++,nro++;
			cp = cnt-1;
			while(cp>0 and nro!=p){
				i++;
				nro++;
				cp--;
			}
		}
		printf("Line = %lld, column = %lld.\n",i,j);
	}
	return 0;
}