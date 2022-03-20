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

bool isPal(string s){
	int n= s.size()>>1;
	for(int i = 0 ;i< n;i++)
		if(s[i]!=s[n-i-1])
			return 0;
	return 1;
}

int main(){
	set<string>se;
	string s;
	while(cin>>s){
		int ans = 0;
		int n= s.size();
		for(int i = 0 ;i< n;i++){
			string t ="";
			for(int j= i ;j <n-i;j++){
				t.push_back(s[j]);
				ans+=isPal(t);
			}
		}
		cout<<"The string '"<<s<<"' contains "<<ans<<" palindromes.\n";
	}
	return 0;
}