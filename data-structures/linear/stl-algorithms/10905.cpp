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
	int n;
	vector<string> ar;
	while(cin>>n,n){
		ar.resize(n);
		for(string &x:ar) cin>>x;
		sort(ar.begin(),ar.end(),[](string&	 a, string& b) {return a+b > b+a;});
		for(string x:ar) cout<<x;
		printf("\n");
	}
	return 0;
}