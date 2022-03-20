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

bool isPal(vector<string>&ar){
	int n= ar.size();
	for(int i= 0 ;i< (n>>1);i++){
		string t = ar[n-1-i];
		reverse(all(t));
		if(ar[i]!=t)
			return false; 
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	string s;
	cin.ignore();
	for(int i= 1; i<=t ;i++){
		getline(cin,s);
		string x="";
		for(char c:s)
			if('a'<=c and c<='z')
				x.push_back(c);
		int sq = sqrt(x.size());
		cout<<"Case #"<<i<<":"<<endl;
		if(sq*sq == x.size()){

			int j= 0 ;
			vector<string>ar(sq);
			s = "";
			for(char c:x){
				if(s.size()<sq) s.push_back(c);
				else ar[j++] = s,s=c;
			}
			ar[j] = s;
			if(isPal(ar)) cout<<sq<<endl;
			else cout<<"No magic :("<<endl;
		}else{
			cout<<"No magic :("<<endl;
		}
	}
	return 0;
}