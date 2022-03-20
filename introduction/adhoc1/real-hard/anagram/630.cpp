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

int main(){
	int t;
	string s;
	cin>>t;	
	for(int k = 0 ;k < t ;k++){
		int n;
		cin>>n;
		vector<string >ar(n),ord(n);
		for(int i= 0 ;i< n;i++)cin>>ar[i],ord[i] = ar[i];
		for(string &x:ord) sort(ALL(x));
		if(k>0) cout<<'\n';	
		while(cin>>s,s!="END"){
			string t = s;
			sort(ALL(t));
			vector<string >ans;
			for(int i= 0 ;i< n;i++)
				if(ord[i]==t)
					ans.push_back(ar[i]);
			// sort(ALL(ans));
			cout<<"Anagrams for: "<<s<<'\n';
			if(ans.size()==0) cout<<"No anagrams for: "<<s<<'\n';
			else{
				for(int i= 1 ;i<=ans.size();i++)
					cout<<"  "<<i<<") "<<ans[i-1]<<'\n';
			}
		}
	}
	return 0;
}