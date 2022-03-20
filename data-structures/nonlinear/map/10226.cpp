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
	int t;
	string s;
	bool linea = false;
	cin>>t;
	cin.ignore(); getline(cin,s);

	while(t--){
		map<string,int> ha;

		int n = 0;
		while(getline(cin,s), !s.empty()){
			ha[s]++;
			n++;
		}

		if(linea) cout<<endl;
		for(auto x : ha){
			double per = 100.0 * x.second / (n);
			cout<<x.first<<" "<<fixed<<setprecision(4)<<per<<endl;
		}
		linea = true;
	}
	return 0;
}