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

bool cmp(char &a, char &b){
	if(tolower(a) == tolower(b)) return a<b;
	return tolower(a)<tolower(b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(),s.end(),cmp);
		do{
			cout<<s<<endl;
		}while(next_permutation(s.begin(),s.end(),cmp));
	}
	return 0;
}