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

//notar que un tag, puede estar en varias categorias
//ademas que la ncat puede ser >=, y no exactamente igual


int main(){
	int caso = 0;
	int t;
	cin>>t;
	while(t--){
		int categories;
		cin>>categories;

		string name,x,y; 
		int tags, mini;

		map<string,vector<string>> ha;
		map<string,bool> exist;

		vector<string> cat;
		vector<int> ncat;

		for(int i= 0 ;i< categories ;i++){
			cin>>name>>tags>>mini;
			// cout<<name<<" "<<tags<<" "<<mini<<endl;
			cat.push_back(name);
			ncat.push_back(mini);

			while(tags--){
				cin>>x;
				ha[x].push_back(name);
			}

		}

		string line;
		getline(cin,line);
		while(getline(cin,line),!line.empty()){
			line.push_back('0');
			string word = "";
			for(int i= 0 ;i< line.size(); i++){
				if(isalpha(line[i])){
					word.push_back(line[i]);
				}else{
					if(!word.empty()){
						//aqui tenemos la palabra
						exist[word] = true;
					}
					word = "";
				}
			}
		}

		map<string,int> put;
		for(auto a : ha){
			if(exist.find(a.first) == exist.end()) continue;
			map<string,bool> used;
			for(auto b: a.second){
				if(used.find(b) == used.end()){
					put[b]++;
				}
				used[b] = true;
			}
		}

		// for(auto a: put) cout<<a.first<<" "<<a.second<<endl;

		// cout<<"Case #"<<(++caso)<<endl;
		// for(auto a:ha){
		// 	cout<<a.first<<":";
		// 	for(auto b: a.second) cout<<" "<<b;
		// 		cout<<endl;
		// }

		string ans = "";
		for(int i= 0 ;i< categories ;i++){
			if(put[cat[i]] >= ncat[i]){
				if(!ans.empty()) ans.push_back(',');
				ans.append(cat[i]);
			}
		}
		if(ans.empty()) ans = "SQF Problem.";
		cout<<ans<<endl;
	}
	return 0;
}

		// for(auto a: exist) cout<<a.first<<" "<<a.second<<endl;

// for(auto a: cnt) cout<<a.first<<" "<<a.second<<endl;
