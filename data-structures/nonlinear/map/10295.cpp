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
	int n,m;
	map<string,ll> value;

	cin>>n>>m;

	string word;
	ll cost ;
	while(n--){
		cin>>word>>cost;
		value[word] = cost;
	}

	cin.get();
	string line;

	ll ans = 0;
	while(m){
		getline(cin,line);

		//obtener valor
		stringstream ss;
		ss.clear();
		ss<<line;

		while(ss>>word)
			ans += value[word];

		if(line == "."){ //works end here
			cout<<ans<<endl;
			m--;
			ans =0;
		}
	}

	return 0;
}

