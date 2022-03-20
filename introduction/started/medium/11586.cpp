#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<", ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 2003;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int t;
	string s;
	stringstream ss;
	cin>>t;
	cin.ignore();
	int lf,lm,rf,rm;
	while(t--){
		lf = lm = rf = rm =0;
		string cad;
		getline(cin,s);
		ss.clear();
		ss<<s;
		int cont =0;
		while(ss>>cad){
			cont++;
			if(cad.front()=='M') lm++;
			else lf++;
			if(cad.back()=='M') rm++;
			else rf++;
		}
		if(lf == rm and lm == rf and cont>1 ) cout<<"LOOP\n";
		else cout<<"NO LOOP\n";
	}
	return 0;
}