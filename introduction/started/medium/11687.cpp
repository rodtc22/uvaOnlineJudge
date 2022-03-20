#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 2003;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	string s;
	int cont;
	while(cin>>s,s!="END"){
		int cont = 0;
		do{
			int sz = s.size();
			string t = to_string(sz);
			if(s==t) break;
			cont++;
			s = t;
		}while(1);
		cout<<cont+1<<endl;
	}
	return 0;
}