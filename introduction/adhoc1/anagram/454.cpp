#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

string f(string x){
	string t ="";
	for(char c:x)
		if(c!=' ')
			t.push_back(c);
	sort(ALL(t));
	return t;
}

int main(){
	int t;
	bool sw = 0;
	cin>>t;
	cin.ignore();
	cin.ignore();
	while(t--){
		vector<string> ar;
		string s;
		while(getline(cin,s),s!="")
			ar.push_back(s);
		int n= ar.size();
		sort(ALL(ar));
		if(sw) cout<<"\n";
		for(int i= 0 ;i< n-1 ;i++){
			string s1 = f(ar[i]);
			for(int j = i+1 ;j<n;j++){
				string s2  = f(ar[j]);
				if(s1 == s2){
					cout<<ar[i]<<" = "<<ar[j]<<endl;
				}
			}
		}
		sw = 1;
	}
	return 0;
}