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
	set<string> se;
	string s;
	while(getline(cin,s)){
		if(s.empty()) continue;
		
		//sacamos solo palabras
		s.push_back('0');
		string word;
		for(int i= 0 ;i< s.size() ;i++){
			if(isalpha(s[i])){
				word.push_back(tolower(s[i]));
			}else{
				if(word.size())
					se.insert(word);;
				word = "";
			}
		}
		
	}		
	for(auto x: se) cout<<x<<endl;
	return 0;
}