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

set <string> se;

void solve(string &s){
	string word;
	s.push_back('0');
	for(auto c: s){
		if(isalpha(c) || c == '-'){
			word.push_back(tolower(c));
		}else{
			if(word.size()) se.insert(word);
			word = "";
		}
	}
}

int main(){
	string line,txt="";

	while(getline(cin,line)){
		if(line.empty()) continue;

		if(line.back()=='-'){
			line.pop_back();
			txt.append(line);
		}else{
			txt.append(line);
			solve(txt);
			txt.clear();
		}
	}
	for(auto x : se) cout<<x<<endl;
	return 0;
}