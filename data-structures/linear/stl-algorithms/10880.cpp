#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int t;
	scanf("%d",&t);
	vector<int> ans;
	for(int i=1 ;i<=t ;i++){
		
		int c,r;
		scanf("%d %d",&c,&r);
		int m= c-r;


		if(c == r) printf("Case #%d: 0\n",i);
		else{
			ans.clear();

			for(ll j = 1 ; j*j <= m ;j++){
				if(m%j!=0) continue;
				int a = j, b= m/j;
				if(a>r)
					ans.push_back(a);
				if(b != a && b > r) 
					ans.push_back(b);
			}
			sort(ALL(ans));

			printf("Case #%d:",i);
			for(int a:ans) printf(" %d",a);
			printf("\n");
		}
	}
	return 0;
}
