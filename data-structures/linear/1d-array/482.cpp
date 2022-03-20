#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 100005;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

typedef pair<int,string> par;

int main(){
	int t,n,x,i;
	cin>>t;
	string per,dat;
	cin.ignore();
	for(int z = 0 ;z < t ;z++){
		vector<par> ar;
		cin.ignore();
		getline(cin,per);
		getline(cin,dat);
		
		stringstream ss; 
		string word;
		ss.clear();ss<<per;
		int n = 1;
		while(ss>>word){
			ar.push_back({atoi(word.data()),""});
			n = max(n,atoi(word.data()));
		}
		ss.clear();ss<<dat;
		i = 0;
		while(ss>>word)
			ar[i++].second = word;

		if(z>0) cout<<endl;

		for(int i= 0 ;i< n;i++){
			while(i!=ar[i].first-1){
				swap(ar[i],ar[ar[i].first-1]);
			}
			cout<<ar[i].second<<endl;
		}
		// for(auto d:ar) cout<<d.first<<" "<<d.second<<endl;cout<<endl;
		
	}
	return 0;
}