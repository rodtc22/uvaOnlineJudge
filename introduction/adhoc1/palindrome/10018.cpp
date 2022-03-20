#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		unsigned int		unt;
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

bool isPal(string s){
	int n= s.size();
	for(int i= 0 ;i< (n>>1);i++)
		if(s[i]!=s[n-i-1])
			return 0;
	return 1;
}

int main(){
	int t,cont = 0;;
	string s,ss;
	cin>>t;
	while(t--){
		cin>>s;
		cont = 0;
		do{
			cont++;
			ss = s;
			reverse(all(ss));
			unt a = atoll(s.data());
			unt b = atoll(ss.data());
			a+=b;
			s = to_string(a);
			if(isPal(s)) break;
		}while(1);
		cout<<cont<<" "<<s<<endl;
	}
	return 0;
}