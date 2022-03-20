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
	vector<string> ar;
	bool linea = 0;

	cin>>t;
	cin.get(); getline(cin,s);

	while(t--){
		ar.clear();
		if(linea) cout<<endl;

		while(getline(cin,s),!s.empty())
			ar.push_back(s);

		map<string,int> ha;
		int n= ar.size();

		for(int i= 0 ;i< n; i++)
			for(int j= 0 ;j< n;j++)
				if(i!=j)
					ha[ar[i]+ar[j]]++;

		int maxi = -1;
		for(auto h:ha) maxi = max(maxi, h.second);
		
		for(auto h : ha){
			if(h.second == maxi){
				cout<<h.first<<endl;
				break;
			}
		}
		linea =1 ;
	}
	return 0;
}