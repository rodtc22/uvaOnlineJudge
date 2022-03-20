#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<string,int>	si;
const		int 			N = 2e5;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

int find(string x, vector<si> &ar){
	for(int i= 0 ;i<ar.size();i++)
		if(ar[i].first == x)
			return i;
	return -1;
}

int main(){
	int n,caso = 0;
	while(cin>>n){
		vector<si> ar(n);
		for(int i= 0 ;i< n;i++){
			cin>>ar[i].first;
			ar[i].second = 0;
		}
		string per,nom;
		int mount,cnt;
		for(int i=  0;i<n ;i++){
			cin>>per>>mount>>cnt;
			if(cnt==0) continue;
			int x = mount/cnt;
			int pos_per = find(per,ar);
			while(cnt--){
				cin>>nom;
				int pos2 = find(nom,ar);
				ar[pos_per].second-=x;
				ar[pos2].second+=x;
			}
		}
		if(caso>0) cout<<endl;
		for(int i= 0 ;i< n;i++){
			cout<<ar[i].first<<" "<<ar[i].second<<endl;
		}
		caso++;
	}
	return 0;
}