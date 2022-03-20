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

int f(string s){
	int cont = 0 ;
	for(char &c:s){
		if('A'<=c and c<='Z')
		   c = tolower(c);
		if('a'<=c and c<='z'){
			cont+=(c-'a'+1);
		}
	}
	return cont;
}

int f2(int x){
	if(int(log10(x))==0) return x;
	int cont = 0;
	while(x){
		cont+=(x%10);
		x/=10;
	}
	return f2(cont);
}

int main(){
	string a,b;
	while(getline(cin,a)){
		getline(cin,b);
		int na = f(a);
		int nb = f(b);
		int ma = f2(na);
		int mb = f2(nb);
		if(ma>mb) swap(ma,mb);
		cout<<fixed<<setprecision(2)<<(100.0*ma/mb)<<" %\n";
	}
	return 0;
}