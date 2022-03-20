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
	int n; //2e6
	string s;
	vector<ii>pos;
	char c;
	while(cin>>n,n){
		int dist = n;
		bool sw = 0;
		char c;
		int pos = -1;
		char a = 'R',b = 'D';
		for(int i= 0 ;i< n;i++){
			cin>>c;
			if(c=='Z') sw = 1;
			if(pos==-1 and (c=='R' or c=='D')){
				pos = i;
				if(c=='D') swap(a,b);
				continue;
			}
			if(c==a){
				pos = i;
			}else if(c==b){
				swap(a,b);
				dist = min(dist,i-pos);
				pos =i;
			}
		}
		if(sw) dist = 0;
		cout<<dist<<endl;
		
	}	
	return 0;
}