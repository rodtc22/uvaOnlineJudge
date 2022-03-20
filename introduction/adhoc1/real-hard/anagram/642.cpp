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

map<string,set<string>> ma;

int main(){
	string s;
	while(cin>>s,s!="XXXXXX"){
		string t= s;
		sort(ALL(t));
		ma[t].insert(s);
	}
	while(cin>>s,s!="XXXXXX"){
		string t = s;
		sort(ALL(t));
		if(ma.count(t)==0) cout<<"NOT A VALID WORD\n";
		else{
			for(string x : ma[t]) cout<<x<<'\n';
		}
		cout<<"******\n";
	}
	return 0;
}