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
	string s;
	while(getline(cin,s),(s!="DONE")){
		string t="";
		for(char c:s){
			if(('a'<=c and c<='z') or ('A'<=c and c<='Z'))
				t.push_back(tolower(c));
		}
		cout<<(isPal(t)?"You won't be eaten!":"Uh oh..")<<endl;

	}
	return 0;
}