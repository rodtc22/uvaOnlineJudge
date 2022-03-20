#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 3003;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int n;
	int ar[N];
	while(scanf("%d",&n)==1){
		for(int i= 0 ;i< n;i++) scanf("%d",&ar[i]);
		bool sw = 1;
		bool ok[n]={};
		for(int i= 0 ;i< n-1;i++)
			ok[abs(ar[i]-ar[i+1])]=1;
		for(int i= 1; i<n; i++)
			sw &= ok[i];
		printf("%s\n",sw?"Jolly":"Not jolly");
	}
	return 0;
}