#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 10004;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int k;
	string s;
	while(cin>>k,k){
		cin>>s;
		int n =s.size();
		k = n/k;
		for(int i= k-1 ;i< n; i+=k){
			int j= i;
			while(j>i-k){
				cout<<s[j];
				j--;
			}
		}
		cout<<endl;
	}
	return 0;
}