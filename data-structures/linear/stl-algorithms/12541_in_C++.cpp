#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 5e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

typedef pair<int,string> is;
typedef pair<ii,is> people;

int main(){

	int n; 
	cin>>n;

	vector<people>ar(n);
	cin.get();

	string s;
	stringstream ss;
	for(int i= 0 ;i< n ;i++){
		getline(cin,s);
		ss.clear(); ss<<s;

		string name;
		int dia, mes,anio;
		ss>>name>>dia>>mes>>anio;

		ar[i] = {{anio,mes},{dia,name}};
	}	
	sort(ar.rbegin(),ar.rend());
	cout<<ar[0].second.second<<endl<<ar[n-1].second.second<<endl;
	return 0;
}