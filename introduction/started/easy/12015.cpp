#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define	print(x)	{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define	index(n)	{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define	all(x)	x.begin(),x.end() 
typedef	long long 		ll;
typedef	pair<int,char>	ii;
const		int 	N = 502;
const		int 	M = 1e9+7;
//-------------------------------------------------------------------

int main(){
	int t;
	cin>>t;
	for(int i= 1 ;i<=t ;i++){
		string ans = "",s;
		int x,ans_x=0;
		for(int j = 0 ;j<10 ;j++){
			cin>>s>>x;
			if(ans_x<x){
				ans = s;
				ans_x = x;
			}else if(ans_x==x){
				ans.push_back('\n');
				ans.append(s);
			}
		}
		cout<<"Case #"<<i<<":\n"<<ans<<'\n';
	}
	return 0;
}