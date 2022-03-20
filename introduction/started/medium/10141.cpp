#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<", ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<string,int>	si;
const		int 			N = 2e5;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	ios::sync_with_stdio(0);
	cin.tie();
	int req,pro,caso = 0;
	string s;
	while(cin>>req>>pro,req or pro){
		// vector<string>requeriment(req);
			cin.ignore();
		for(int i= 0 ;i<req ;i++){
			getline(cin,s);
		}
		// print(requeriment);

		string ans="";
		double ans_cost = 1e9;
		int ans_req =0;

		string name,req1;
		double price,met_req;
		while(pro--){
			getline(cin,name);
			
			cin>>price>>met_req;
			// cout<<name<<" "<<price<<" "<<met_req<<endl;
			if(ans_req<met_req){
				ans_req = met_req;
				ans_cost = price;
				ans = name;
			}else if(ans_req==met_req){
				if(ans_cost>price){
					ans_req = met_req;
					ans_cost = price;
					ans = name;
				}
			}
			cin.ignore();
			while(met_req--){
				getline(cin,req1);
			}
		}
		if(caso>0) cout<<"\n";
		cout<<"RFP #"<<(++caso)<<'\n'<<ans<<'\n';

	}
	return 0;
}