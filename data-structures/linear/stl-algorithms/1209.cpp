#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int distance(string s){
	int mini = oo;
	for(int i= 0 ;i< s.size()-1 ;i++)
		mini = min(mini,abs(s[i]-s[i+1]));
	return mini;
}

int main(){
	string s;
	while(cin>>s){
		vector<string> perm;
		vector<int> dist;
	
		int cont = 11;
		string cp  = s;
		while(cont--){
			perm.push_back(cp);
			if(!prev_permutation(ALL(cp))) break;
		}
		reverse(ALL(perm));
		cont = 10;
		cp =s ;
		while(cont--){
			if(!next_permutation(ALL(cp))) break;
			perm.push_back(cp);
		}
		sort(ALL(perm));
		dist.resize(perm.size());
		int largest = -1;
		for(int i=  0;i<perm.size(); i++){
			dist[i] = distance(perm[i]);
			largest = max(largest,dist[i]);
		}
	
		for(int i = 0 ;i< perm.size(); i++){
			if(largest != dist[i]) continue;
			cout<<perm[i]<<dist[i]<<endl;
			break;
		}
	}
	return 0;	
}