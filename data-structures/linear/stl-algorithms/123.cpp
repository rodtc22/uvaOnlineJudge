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

typedef pair<string, int> si;

void to_lower(string &s){	for(char &c:s) c = tolower(c);}

void to_upper(string &s){for(char &c:s) c = toupper(c);}

bool cmp(si a, si b){
	int i= 0; 
	while(a.first[i]!=' ' and i< a.first.size()) i++;
	string aa = a.first.substr(0,i);
	i = 0;
	while(b.first[i]!=' ' and i< b.first.size()) i++;
	string bb = b.first.substr(0,i);
	if(aa==bb) return a.second<b.second;
	return aa<bb;
}

int main(){
	string s;
	vector<string> ignore;
	vector<si>title;
	while(cin>>s,s!="::")
		ignore.push_back(s);
	sort(ALL(ignore));
	stringstream ss; 
	string word;
	int conta = 0;
	while(getline(cin,s)){
		ss.clear(),ss<<s;
		while(ss>>word){
			to_lower(word);
			if(binary_search(ignore.begin(),ignore.end(),word)) continue;
			to_upper(word);
			string t = word+" "+s;
			title.push_back({t,conta});
		}
		conta++;
	}
	sort(title.begin(),title.end(),cmp);
	int cont = 1;
	string ant="-1";
	for(int i= 0 ;i< title.size();i++){
		(ant==title[i].first)? cont++ : cont  = 1;
		ss.clear(),ss<<title[i].first;
		int j = 0,c=0;
		string first = "";
		while(ss>>word){
			if(first == "") {first = word;continue;}
			to_upper(word);
			if(j>0) cout<<" ";
			if(word==first){
				c++;
				if(c!=cont) to_lower(word);
			}else{
				to_lower(word);
			}
			j++;
			cout<<word;
		}
		cout<<endl;
		ant = title[i].first;
	}
	// for(string d:title) cout<<d<<endl;
	return 0;
}