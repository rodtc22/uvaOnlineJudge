#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 3003;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int cases,k;
	char c;
	int values[512];
	cin>>cases;
	while(cases--){
		memset(values,0,sizeof values);
		cin>>k;
		while(k--){
			cin>>c;
			cin>>values[c+256];
		}
		cin>>k;
		string s;
		int total = 0;
		cin.ignore();
		while(k--){
			getline(cin,s);
			for(char c:s) total += values[c+256];
		}
		cout<<total/100<<'.'<<setfill('0')<<setw(2)<<total%100<<"$\n";
	}
	return 0;
}