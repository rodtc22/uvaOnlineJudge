#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	string s;
	stringstream ss;
	map<string,string> dic;

	while(getline(cin,s),!s.empty()){
		ss.clear(); ss<<s;
		string a,b;
		ss>>a>>b;
		dic[b] = a;
	}

	while(cin>>s){
		if(dic.find(s) == dic.end()){
			cout<<"eh\n";
		}else{
			cout<<dic[s]<<'\n';
		}
	}

	return 0;
}