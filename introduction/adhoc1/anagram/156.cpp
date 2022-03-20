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

void letter(vector<int> &vec,string s){
	for(char c:s){
		char d = c;
		d = tolower(d);
		vec[d-'a']++;
	}
}

int main(){
	vector<vector<int>> ar;
	vector<string >vec;
	string s;
	stringstream ss;
	while(getline(cin,s),s!="#"){
		ss.clear();
		ss<<s;
		while(ss>>s)
			vec.push_back(s);
	}
	sort(ALL(vec));
	int n = vec.size();
	for(int i= 0 ;i< n ;i++){
		vector<int>let(26,0);
		letter(let,vec[i]);
		ar.push_back(let);
	}
	for(int i= 0 ;i< n; i++){
		int cont = 0 ;
		for(int j = 0 ;j < n ;j++)
			cont += (ar[i]==ar[j]);
		if(cont==1) cout<<vec[i]<<'\n';
	}
		return 0;
}