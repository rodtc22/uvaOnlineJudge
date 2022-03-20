#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	pi;
typedef 	pair<ll,ll>		pl;
const 		int  			oo =1e9;
const		int 			N = 1e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

map<string,int> H;

string ans = "";
int id = 1;
void crear(char c, int i ,int lim){
	if(i==lim){
		H[ans]= id++;
		return ;
	}
	for(char cc = c; cc <= 'z' ;cc++){
		ans.push_back(cc);
		crear(cc+1,i+1,lim);
		ans.pop_back();
	}
}


int main(){
	for(int i= 1; i<= 5; i++)
		crear('a',0,i);
	
	string s;
	while(cin>>s){
		cout<<H[s]<<endl;
	}
	return 0;
}